/*
Design, Develop and Implement a menu driven Program in C for the following operations
on Circular QUEUE of Characters (Array Implementation of Queue with maximum size
MAX)
a. Insert an Element on to Circular QUEUE
b. Delete an Element from Circular QUEUE
c. Demonstrate Overflow and Underflow situations on Circular QUEUE
d. Display the status of Circular QUEUE
e. Exit
Support the program with appropriate functions for each of the above operations 
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 4
char q[10],item;
int f=0,r=0,c=0;
void insert()
{
printf("Enter the ele: ");
flushall();
scanf("%c",&item);
printf("element entered is %c\n",item);
if((f==1 && r==MAX) || f==r+1)
{
printf("queue overflow\n");
return;
}
if(f==0)
f=r=1;
else if(r==MAX) r=1;
else r=r+1;
q[r]=item;
printf("%c is inserted\n",item);
c=c+1;
return;
}
void delete()
{
if(f==0)
{
printf("queue underflow\n");
return;
}
item=q[f];
printf("\nDeleted Element is %c\n",item);
if(f==r) f=r=0;
else if(f==MAX) f=1;
else f=f+1;
c=c-1;
return;
}
void display()
{
int i;
if(f==0)
{
printf("queue underflow\n");
return;
}
else if(f>r)
{
int df=f;
printf("queue elements are\n");
for(i=1;i<=c;i++)
{ if(df==MAX+1)
df=1;
printf("%c\t",q[df]);
df++;
}
}
else //f<r
{
printf("queue elements are\n");
for(i=f;i<=r;i++)
printf("%c\t",q[i]);
}
printf("\nStatus of Queue:\n rear is at %d\n front is at
%d",r,f);
return;
}
void main()
{
int ch;
clrscr();
printf("Q Operations\n");
printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
while(1)
{
printf("Enter your Choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1: insert();break;
case 2: delete();break;
case 3: display();break;
case 4: exit(1); break;
default: printf("Invalid\n");
}
}
}