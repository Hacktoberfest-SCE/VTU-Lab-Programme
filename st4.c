#include&lt;stdio.h&gt;
#include&lt;conio.h&gt;
void main()
{
char STR[100],PAT[100],REP[100],ans[100];
int i,j,c,m,k,flag=0;
clrscr();
printf(&quot;\nEnter the MAIN string: \n&quot;);
gets(STR);
printf(&quot;\nEnter a PATTERN string: \n&quot;);
gets(PAT);
printf(&quot;\nEnter a REPLACE string: \n&quot;);
gets(REP);
i = m = c = j = 0;
while ( STR[c] != &#39;\0&#39;)
{
// Checking for Match
if ( STR[m] == PAT[i])
{
i++;
m++;
flag=1;
if ( PAT[i] == &#39;\0&#39;)
{
//copy replace string in ans string
for(k=0; REP[k] != &#39;\0&#39;;k++,j++)
ans[j] = REP[k];
i=0;
c=m;
}
}
else //mismatch
{
 ans[j] = STR[c];
j++;
c++;
m = c;
i=0;
}
}
if(flag==0)
{
printf(&quot;Pattern doesn&#39;t found!!!&quot;);
}
else
{
ans[j] = &#39;\0&#39;;
printf(&quot;\nThe RESULTANT string is:%s\n&quot; ,ans);
}
getch();
} 
