/*Design, develop, code and run the program in any suitable language to implement the NextDate function. 
Analyze it from the perspective of equivalence class analysis. 
Derive different test cases, execute these test cases and discuss the test results.*/
#include<stdio.h>
int main()
{
	intdd,mm,yy,flag=0;
	Printf("Enter the date,month and year\n");
	scanf("%d%d%d",&dd,&mm,&yy);
	if(dd<=0||dd>31)
	{
		printf("Day out of range\n");
		flag=1;
	}
	if(mm<=0||mm>12)
	{
		printf("Month out of range\n");
		flag=1;
	}
	if(yy<=1812||yy>2012)
	{
		printf("Year out of range\n");
		flag=1;
	}
	if(flag==0)
	{
		if(mm==1||mm==3||mm==5||mm==7||mm==8||mm==10)
		{
			if(dd<31)
				dd=dd+1;
			else
			{
				dd=1;
				mm=mm+1;
			}
		}
		else if(mm==4||mm==6||mm==9||mm==11)
		{
			if(dd<30)
				dd=dd+1;
			else if(dd==31)
			{
				printf("Date 31 does not exist in this month\n");
				return 0;
			}
			else
			{
				dd=1;
				mm=mm+1	;
			}
		}
		else if(mm==12)
		{
			if(dd<31)
				dd=dd+1;
			else
			{
				dd=1;
				mm=1;
				yy=yy+1;
			}
		}
		else
		{
			if((yy%4==0 && yy%100!=0) || (yy%400==0))
			{
				if(dd<29)
					dd=dd+1;
				else if(dd>29)
				{
				printf("Day %d does not exist in this month\n",dd);
					return 0;
				}
				else
				{
					dd=1;
					mm=3;
				}
			}
			else
			{

				if(dd<28)
					dd=dd+1;
				else if(dd>28)
				{
printf("Day %d does not exist in this month\n",dd);
					return 0;
				}
else
				{
					dd=1;
					mm=3;
				}
			}
		}
		printf("Next date:%d-%d-%d\n",dd,mm,yy);

		return 0;
	}
	else
		return 0;
}
