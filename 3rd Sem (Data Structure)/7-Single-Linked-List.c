/*
Design, Develop and Implement a menu driven Program in C for the following operations
on Singly Linked List (SLL) of Student Data with the fields: USN, Name, Branch, Sem,
PhNo
a. Create a SLL of N Students Data by using front insertion.
b. Display the status of SLL and count the number of nodes in it
c. Perform Insertion and Deletion at End of SLL
d. Perform Insertion and Deletion at Front of SLL
e. Demonstrate how this SLL can be used as STACK and QUEUE
f. Exit
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
int count=0;
struct node
{
int sem;
long int phno;
char name[20],branch[10],usn[20];
struct node *next;
}*first=NULL,*last=NULL,*temp=NULL, *temp1;
void create()
{
int sem;
long int phno;
char name[20],branch[10],usn[20];
temp=(struct node*)malloc(sizeof(struct node));
printf("\n Enter usn,name, branch, sem, phno of student : ");
scanf("%s %s %s %d %ld",usn,name,branch,&sem,&phno);
strcpy(temp->usn,usn);
strcpy(temp->name,name);
strcpy(temp->branch,branch);
temp->sem = sem;
temp->phno = phno;
temp->next=NULL;
count++;
return;
}
void insert_atfirst() {
if (first == NULL) {
create();
first = temp;
last = first; }
else {
create();
temp
->next = first;
first = temp; }}
void insert_atlast() {
if(first==NULL) {
create();
first = temp;
last = first; }
else {
create();
last
->next = temp;
last = temp; }}
void display() {
temp1=first;
if(temp1 == NULL) {
printf("List empty to display
\n");
return;
}
printf("\n Linked list elements from begining : \n");
while (temp1!= NULL)
{
printf("%s %s %s %d %ld\n", temp1->usn,temp1->name,temp1->branch,temp1->sem,temp1-
>phno);
temp1 = temp1->next;
}
printf(" No of students = %d ", count);
}
int deleteend()
{
struct node *temp;
temp=first;
if(temp->next==NULL)
{
free(temp);
first=NULL;
}
else
{
while(temp->next!=last)
temp=temp->next;
printf("%s %s %s %d %ld\n", last->usn, last->name,last->branch, last->sem, last->phno );
free(last);
temp->next=NULL;
last=temp;
}
count--;
return 0;
}
int deletefront()
{
struct node *temp;
temp=first;
if(temp->next==NULL)
{
free(temp);
first=NULL;
return 0;
}
else
{
first=temp->next;
printf("%s %s %s %d %ld", temp->usn, temp->name,temp->branch,temp->sem,
temp->phno );
free(temp);
}
count--;
return 0;
}
void main()
{
int ch,n,i;
clrscr();
first=NULL;
temp = temp1 = NULL;
printf("-----------------MENU---------------------\n");
printf("\n1-create a SLL of n students\n2-Display from beginning");
printf("\n3-Insert at end\n4-delete at end");
printf("\n5-Insert at beg\n6-delete at beg\n7-To show SLL as Stack\n");
printf("8-To show SLL as Queue \n9-exit\n");
printf(" ----------------------------------------- \n");
while (1)
{
printf("\n Enter choice : ");
scanf("%d", &ch);
switch (ch)
{
case 1:printf("\n Enter no of students : ");
scanf("%d", &n);
for(i=0;i<n;i++)
insert_atfirst();
break;
case 2: display();
break;
case 3:insert_atlast();
break;
case 4:deleteend();
break;
case 5: insert_atfirst();
break;
case 6: deletefront();
break;
case 7: printf("\nTo show SLL as Stack,\n 1. Perform Push operations by calling only
insert_atfirst() function.\n 2. Perform Pop operations by calling only deletefront() function\n 3.
Perform display operation by calling display() function.\n");
break;
case 8: printf("\nTo show SLL as Queue,\n 1. Perform Insert operations by calling only
insert_atfirst() function.\n 2. Perform Delete operations by calling only deleteend() function\n 3.
Perform display operation by calling display() function.\n");
break;
case 9: exit(0);
default: printf("wrong choice\n");
}
}
}
