#include<stdio.h>
#include<stdlib.h>
#define max 50

int s[max], top = -1;

void push(int ele)
{
if(top==max-1)
{
printf("Stack is Overflow\n");
}
else
{
s[++top]=ele;
}
}

void pop()
{
if(top==-1)
{
printf("Stack is underflow\n");
}
else
{
printf("Poped element = %d",s[top]);
top--;
}
}

void display()
{
int i;
if(top==-1)
{
printf("No elements in Stack to display");
}
else
{
for(i=top;i>=0;i--)
{
printf("%d\n",s[i]);
}
}
}

void palindrome()
{
char str[20];
int i,top=-1,l,c=0;
printf("Enter the String\n");
scanf("%s",&str);
for(i=0;str[i]!='\0';i++)
{
s[++top]=str[i];
l=l+1;
}
for(i=0;str[i]!='\0';i++)
{
if(str[i]==s[top--])
{
c++;
}
else
{
break;
}
}
if(c==l)
printf("It is a palindrome\n");
else
printf("It is not a palindrome\n");
}

void main()
{
int ele, ch;
for( ; ; )
{
printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.PALINDROME\n5.EXIT\n");
printf("Enter the choice");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("Enter element\n");
scanf("%d",&ele);
push(ele);
break;
case 2:pop();
break;
case 3:display();
break;
case 4:palindrome();
break;
case 5:exit(0);
break;
default:printf("Invalid Choice");
}
}
}