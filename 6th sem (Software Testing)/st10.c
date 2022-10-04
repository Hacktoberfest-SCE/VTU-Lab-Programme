#include<stdio.h>
int main()
{
int locks,stocks,barrels,sales,flag=0;
float commission;
printf("Enter the total number of locks\n");
scanf("%d",&locks);
printf("Enter the total number of stocks\n");
scanf("%d",&stocks);
printf("Enter the total number of barrels\n");
scanf("%d",&barrels);
if((locks<=0) || (locks>70))
{
flag=1;
printf("Locks Out of Range\n");
}
if((stocks<=0) || (stocks>80))
{
flag=1;
printf("Stocks Out of Range\n");
}
if((barrels<=0) || (barrels>90))
{
flag=1;
printf("Barrels Out of Range\n");
}
if(flag == 1)
{
printf("Invalid input\n");
return 0;
}
sales= locks*45 + stocks*30 + barrels*25;
if(sales <= 1000)
{
commission = 0.10 * sales;
}
else if(sales <= 1800)
{
commission = 0.10 * 1000;
commission = commission + (0.15 * (sales - 1000));
}
else
{
commission = 0.10 * 1000;
commission = commission + (0.15 * 800);
commission = commission + (0.20 * (sales - 1800));
}
printf("Total sales: %d and Commission: %f\n",sales,commission);
return 0;
}
