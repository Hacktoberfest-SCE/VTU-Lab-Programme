#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 3
int Stack[MAX];
int top;
void Pop()
{
if(top==-1)
printf("\n\n\tStack UnderFlow...");
else
printf("\n\n\n\tThe Element Popped is: %d",Stack[top--]);
}
void Push()
{
if(top==MAX-1)
printf("\n\n\tStack OverFlow...");
else
{
printf("\n\n\tEnter an Element to Push into Stack: ");
scanf("%d",&Stack[++top]);
 }
}
void Display()
{
if(top==-1)
printf("\n\n\tStack is Empty, No Elements to Display...");
else
{
 int i;
 printf("\n\nElements of the Stack are:");
 for(i=top;i>=0;i--)
 printf("\n\t\t\t\t%d",Stack[i]);
 printf("\n\n\n\tTotal Number of Elements in the Stack are: %d",top+1);
 }
}
void main()
{
 int choice;
 clrscr();
 top=-1;
 while(1)
 {
 printf("\n\n\n\t1.Push...\t2.Pop...\t3.Display...\t4.Exit...");
printf("\n\n\n\tEnter Your Choice: ");
scanf("%d",&choice);
switch(choice)
 {
 case 1: Push(); break;
 case 2: Pop(); break;
 case 3: Display(); break;
 case 4: exit(0);
 default: printf("\n\n\n\tEnter proper Choice....");
 }
 }
}   
