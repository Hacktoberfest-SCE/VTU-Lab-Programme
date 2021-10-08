import java.util.*;
public class tests
{
	public static void main(String arg[])
	{
		Scanner Scan = new Scanner (System.in);
		int source;
		int no_vertices;
		int [][]adj;
		System.out.println("enter number of vertices:");
		no_vertices= Scan.nextInt();
		adj = new int[no_vertices+1][no_vertices+1];
		System.out.println("enter adjacency matrix:");
		
		for(int i=1; i<=no_vertices;i++)
		{
			
			for(int j=1; j<=no_vertices;j++)
			{
				adj[i][j] = Scan.nextInt();
				if(i==j)
				{
					adj[i][j]=0;
					continue;
				}
				if(adj[i][j]==0)
				
					adj[i][j]= 999;
			}	
		}	
			    System.out.print("enter source vertex:");	
				source = Scan.nextInt();
				
				BellmanFordEvalution(adj,source,no_vertices);
				Scan.close();	
				
	}
		
		public static void BellmanFordEvalution(int adj[][], int source, int no_vertices)
		{
			int[] dist;
			dist = new int[no_vertices+1];
			
			for(int node=1; node<=no_vertices;node++)
				dist[node] = 999;
			dist[source]=0;
			for(int node=1; node<=no_vertices-1;node++)
			{
				for(int sn=1; sn<=no_vertices;sn++)
				{
					for(int dn=1; dn<=no_vertices;dn++)
					{
						if(adj[sn][dn]!= 999)
						{
							if(dist[dn] > dist[sn]+ adj[sn][dn])
								dist[dn]= dist[sn]+adj[sn][dn];
							
						}
				    }
				}
			}	
					
			for(int sn=1; sn<=no_vertices;sn++)
			{
				for(int dn=1; dn<=no_vertices;dn++)
				{
					if(adj[sn][dn]!= 999)
					{
						if(dist[dn] > dist[sn]+ adj[sn][dn])
						{
							System.out.println("contains negative cycle");
							return;
						}
					}	
				}
			}	
			for(int vertex=1; vertex<=no_vertices;vertex++)
				System.out.println("shortest distance from source "+ source + " to "+ vertex + " is " + dist[vertex]);
		}
	
}
