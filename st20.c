#include<stdio.h>
#include<stdlib.h>
int main()
{
inta,b,c;
printf("Enter the sides of the triangle:\n");
scanf("%d%d%d",&a,&b,&c);
if((a<1 || a>10)&&(b<1 || b>10)&&(c<1 || c>10))
printf("Sides a, b and c are of out of range");
else if((a<1 || a>10)&&(b<1 || b>10))
printf("Sides a and b are out of range");
else if((b<1 || b>10)&&(c<1 || c>10))
printf("Sides b and c are out of range");
else if((a<1 || a>10)&&(c<1 || c>10))
printf("Sides a and c are out of range");
else if(a<1 || a>10)
printf("side a is out of range.");
else if(b<1 || b>10)
printf("side b is out of range.");
else if(c<1 || c>10)
printf("side c is out of range.");
else
 {
if((a<b+c)&&(b<a+c)&&(c<a+b))
 {
printf("Triangle is formed..\n");
if(a==b && b==c && c==a )
printf("Equilateral triangle..\n");
  else if(a==b || b==c || c==a)
printf("Isoceles triangle..\n");
else
printf("Scalene triangle...\n");
 }
else
 {
printf("not a triangle..\n");
 }
 }
return 0;
}
