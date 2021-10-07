//implement 0/1 knapsack in dynamic programming method


import java.util.Scanner;
class Knapsack_DP
{
  static int max(int a,int  b) 
  {
  return  (a>b)? a :b;
  }
static int knapSack(int C,int wt[],int val[],int n)
  { int i, j;
  int [][] K =new int[n+1][C+1];
  for  (i = 0; i<= n; i++)
  {
    for (j = 0; j<= C; j++)
    {
    if(i==0 || j==0)
        K[i][j] = 0;  //initializing rows and columns to 0 in tabulation process
    else
    if(wt[i-1] <= j)
        K[i][j] = max(val[i-1]+K[i-1][j-wt[i-1]],K[i-1][j]);  //taking maximum of (if we consider that value in knapsack,if we dont consider that value in knapsack)
    else
         K[i][j] = K[i-1][j]; //if we dont consider that specific value in knapsack
    } 
}
System.out.println("Knapscak table");   //printing our tabulation of array size v/s weight of knapsack
for (i = 0; i<= n; i++)
{  
  for (j = 0; j<= C; j++)
  {
  System.out.print(K[i][j]+" ");
  }
System.out.println();
}
System.out.print("Items Considered: ");
i = n; j= C; 
while(i > 0 && j > 0)
{   
if(K[i][j] != K[i - 1][j])
    {
     System.out.print(i + " ");
     j -= wt[i - 1];
    }
    i -= 1;
} 
return K[n][C];
}
public static void  main(String args[])
     {
      Scanner sc =new Scanner(System.in);
      System.out.println("Enter the number of Objects: ");
     int n = sc.nextInt();
      System.out.println("Enter the object's weights: "); 
    int []wt =new int[n];
    for(int i=0; i<n; i++)
       wt[i] = sc.nextInt();
    System.out.println("Enter the object's profits: ");
    int []val =new int [n];
    for(int i=0; i<n; i++)
       val[i] = sc.nextInt();
    System.out.println("Enter the maximum capacity: "); 
    int  C = sc.nextInt();
    System.out.println("\nThe Maximum value that can be put in a knapsack of capacity W is: " +
    knapSack(C, wt, val, n));
    sc.close();
     }
}
