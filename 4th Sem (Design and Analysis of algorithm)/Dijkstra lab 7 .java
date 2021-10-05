import java.util.Scanner;
public class Dijkstra {
int d[] = new int[10];
int p[] = new int[10];
int visited[] = new int[10];

public void dijk(int[][] a, int s, int n) {
int u = -1, v, i, j, min;
for (v = 0; v &lt; n; v++) {
d[v] = 99;
p[v] = -1;
}
d[s] = 0;
for (i = 0; i &lt; n; i++) {
min = 99;
for (j = 0; j &lt; n; j++) {
if (d[j] &lt; min &amp;&amp; visited[j] == 0) {
min = d[j];
u = j;
}
}
visited[u] = 1;
for (v = 0; v &lt; n; v++) {
if ((d[u] + a[u][v] &lt; d[v]) &amp;&amp; (u != v) &amp;&amp; visited[v] == 0) {
d[v] = d[u] + a[u][v];
p[v] = u;
}
}
}
}

void path(int v, int s) {
if (p[v] != -1)
path(p[v], s);
if (v != s)
System.out.print(&quot;-&gt;&quot; + v + &quot; &quot;);

}

void display(int s, int n) {
int i;
for (i = 0; i &lt; n; i++) {
if (i != s) {
System.out.print(s + &quot; &quot;);
path(i, s);

}
if (i != s)
System.out.print(&quot;=&quot; + d[i] + &quot; &quot;);
System.out.println();

}
}

public static void main(String[] args) {
int a[][] = new int[10][10];
int i, j, n, s;
System.out.println(&quot;enter the number of vertices&quot;);
Scanner sc = new Scanner(System.in);
n = sc.nextInt();
System.out.println(&quot;enter the weighted matrix&quot;);
for (i = 0; i &lt; n; i++)
for (j = 0; j &lt; n; j++)
a[i][j] = sc.nextInt();
System.out.println(&quot;enter the source vertex&quot;);
s = sc.nextInt();

Dijkstra tr = new Dijkstra();
tr.dijk(a, s, n);
System.out.println(&quot;the shortest path between source&quot; + s + &quot;to remaining

vertices are&quot;);

tr.display(s, n);
sc.close();
}
}
