#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
  char usn[10], name[25], branch[5], ph[11];
  int sem;
  struct node *link;
};
struct node *first=NULL;

struct node* getnode()
{
  struct node *temp;
  temp = (struct node *)malloc(sizeof(struct node)); // DMA
  printf("\nEnter the USN, NAME, BRANCH, SEM, PH NO. \n");
  scanf("%s",temp->usn);
  scanf("%s",temp->name);
  scanf("%s",temp->branch);
  scanf("%d", &temp->sem);
  scanf("%s",temp->ph);
  temp->link = NULL;
  return temp;
}
void insertrear()
{
  struct node *temp, *cur;
  temp = getnode();
  if(first==NULL)
  {
    first = temp;
  }
  else if(first->link == NULL)
  {
    first->link = temp;
  }
  else
  {
   cur = first;
   while(cur->link != NULL)
   {
    cur = cur->link;
   }
   cur->link = temp;
  }
}
void insertfront()
{
  struct node *temp;
  temp = getnode();
  if(first==NULL)
  {
   first = temp;
  }
  else
  {
   temp->link = first;
   first = temp;
  }
}
void deletefront()
{
  struct node *temp;
  temp = first;
  if(first == NULL)
  {
    printf("List is empty\n"); return;
  }
  else if(first->link == NULL)
  {
   free(first);
   first = NULL;
  }
  else
  {
   first = first->link;
   temp->link = NULL;
   free(temp);
  }
}
void deleterear()
{
  struct node *cur, *prev;
  cur = first;
  if(first ==  NULL)
  {
    printf("List is Empty\n");return;
  }
  else if(first->link == NULL)
  {
   free(first);
   first = NULL;
  }
  else
  {
    while(cur->link !=NULL)
    {
      prev = cur;
      cur = cur->link;
    }
    prev->link = NULL;
    free(cur);
  }
}

void display()
{
  struct node *temp;
  int count = 0;
  if(first == NULL)
  {
   printf("List is empty\n");return;
  }
  else
  {
   temp = first;
   printf("USN \t NAME\t BRANCH \t SEM \t PH NO\n");
   while(temp !=NULL)
   {
    count++;
    printf("%s\t", temp->usn);
    printf("%s\t",temp->name);
    printf("%s\t", temp->branch);
    printf("%d\t",temp->sem);
    printf("%s\n",temp->ph);
    temp = temp->link;
   }
   printf("\n Number of students in the SLL = %d", count);
  }
}
void main()
{
 int ch;
 for(;;)
 {
 printf("\n 1. Insert Rear \n 2. Insert Front \n 3. Delete Front\n 4. Delete rear\n 5. Display \n6. Exit\n");
 printf("Enter your choice\n");
 scanf("%d", &ch);
 switch(ch)
 {
  case 1: insertrear();
	  break;
  case 2: insertfront();
	  break;
  case 3: deletefront();
	  break;
  case 4: deleterear();
	  break;
  case 5: display();
	  break;
  case 6: exit(0);
  default: printf("Invalid choice\n");
 }
 }
}