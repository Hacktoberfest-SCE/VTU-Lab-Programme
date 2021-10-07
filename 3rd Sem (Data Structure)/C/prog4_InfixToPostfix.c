#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

char stack[30],infix[30], postfix[30];

int top=-1;

void convert();
char pop();
void push(char);
int preced (char);


void main()
{
printf("Enter the infix expression\n");
scanf("%s", infix);
convert();
printf("Given Infix Expression is %s\n",infix);
printf("Postfix expression is %s\n", postfix);
}

void push(char ch)
{
	stack[++top] = ch;
}

char pop()
{
char ch = stack[top];
top--;
return ch;
}

int preced (char ch)
{
		int p;
		switch(ch)
		{
			case '^': p=4;break;
			case '%': p=3; break;
			case '/':
			case '*': p=2;break;
			case '+':
			case '-': p=1;break;
			case '(':
			case ')': p=0; break;
			case '#': p=-1;break;
		}
		return p;
}
void convert()
{
		int i = 0, p = 0;
		char ch;
		push('#');
		while(infix[i]!='\0')
		{
				ch = infix[i];
				switch(ch)
				{
				case '(': push(ch); break;
				case ')': while(stack[top]!='(')
								{
								postfix[p++] = pop();
								}
								pop();
								break;
				case '^':
				case '%':
				case '*':
				case '/':
				case '+':
				case '-' :
								while(preced (stack[top] ) >= preced (ch))
								{
								postfix[p++] = pop();
								}
								push(ch);
								break;

				default: postfix[p++] = ch;
				}
				i++;
		}
		while(stack[top] != '#')
		{
				postfix[p++] = pop();
		}
		postfix[p] = '\0';
}
