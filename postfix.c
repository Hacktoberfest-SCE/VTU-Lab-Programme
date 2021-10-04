#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
float Stack[25]; //Operand Stack...
int top;
char Postfix[25];
int flag;
float Evaluate()
{
 int i=0;
 while(Postfix[i]!='\0')
 {
 char ch=Postfix[i++];
 if(isalpha(ch))
 {
 printf("\n\n\tEnter value of %c: ",ch);
 scanf("%f",&Stack[++top]);
 }
 else
 {
if(top<1) flag=0;
 else
 {
float op1,op2;
op2=Stack[top--];
op1=Stack[top--];
switch(ch)
{
 case '+': Stack[++top]=op1+op2; break;
 case '-': Stack[++top]=op1-op2; break;
 case '*': Stack[++top]=op1*op2; break;
 case '/': Stack[++top]=op1/op2; break;
 case '$':
 case '^': Stack[++top]=pow(op1,op2); break;
 default: printf("\n\n\tInvalid Character: %c",ch);
flag=0;
}
 }
 }
 }
if(top!=0) flag=0;
return Stack[top--];
}
void main()
{
float result;
clrscr();
top=-1;
flag=1;
printf("\n\n\n\t\tEnter the Valid Postfix Expression: ");
scanf("%s",Postfix);
result=Evaluate();
printf("\n\n\tInvalid Postfix Expression....");
if(flag==1)
printf("\n\n\tThe Result of Postfix Expression %s is: %.3f",Postfix,result);
else getch();
} 
