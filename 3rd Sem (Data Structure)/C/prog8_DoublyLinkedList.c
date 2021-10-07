#include<stdio.h>
#include<stdlib.h>

struct node
{
	int ssn;
	char name[20], dept[10], desig[15], phno[10];
	int sal;
	struct node *left; 
	struct node *right;
};

typedef struct node * dnode;

dnode first=NULL;

dnode getnode()
{
	dnode temp;
	temp=(struct node *)malloc(sizeof(struct node));	//Create first NODE
	printf("\nEnter SSN, Name, Dept. , Desig, Ph.No and salary\n");
	scanf("%d",&(temp->ssn));		
	scanf("%s",temp->name);	
	scanf("%s",temp->dept);
	scanf("%s",temp->desig);	
	scanf("%s",temp->phno);	
	scanf("%d",&(temp->sal));
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}

void insert_front()
{
	dnode temp=getnode();
	if(first == NULL)
	{
		first = temp;
	}	
	else
	{
		first->left=temp;
		temp->right=first;
		first=temp;
	}
}

void insert_rear()
{
	dnode temp, cur;
	temp = getnode();
	if(first==NULL)
	{
		first = temp;
	}
	else
	{
	cur=first;
	while(cur->right!=NULL)
	{
		cur=cur->right;
	}
	cur->right=temp;
	temp->left=cur;
	}
}

void delete_front()
{
	dnode temp;
	if(first==NULL)
	{
		printf("Linked list is empty\n");
		return;
	}
	temp=first;
	if(first!=NULL)
		{
			first=first->right;
		}
	free(temp);
	first->left=NULL;
}

void delete_rear()
{
	dnode temp;
	if(first==NULL)
	{
		printf("Linked list is empty\n");
		return;
	}
	if(first->right==NULL)
	{
			free(first);
			first=NULL;
			return;
	}
	temp=first;
	while(temp->right!=NULL)
	{
			temp=temp->right;
	}
	temp->left->right=NULL;
	free(temp);
}

void display()
{
	int count=0;
	dnode temp;
	if(first == NULL)
	{
		printf("List is empty..! \n");
		return;
	}
	temp=first;
	printf("\n----EMPLOYEE DATA----\n"); printf("\nSSN\tNAME\tDept\tDesig\tPh.NO.\tSalary\n");
	while (temp!= NULL) 
	{
	printf("%d \t %s \t %s \t %s \t %s \t %d \n", temp->ssn, temp->name, temp->dept, temp->desig, temp->phno, temp->sal);
	temp = temp->right;
	count++;
	}
	printf(" No of employees = %d ", count); 
}

void main() 
{
	int ch,n,i;
	while (1)
	{
		printf("\n-----------------MENU----------------------\n");
		printf("\n 1.Create \n 2.Display \n 3.Insert at the rear \n 4.delete from rear");
		printf("\n 5.Insert at front \n 6.delete from front \n 7.exit\n");
		printf("--------------------------------------------\n");
		printf("\n Enter choice : ");
		scanf("%d", &ch);
		switch (ch)
		{
		case 1: 	printf("\n Enter no of employees : ");
					scanf("%d", &n);
					for(i=0;i<n;i++)
					{
						insert_rear();
					}
					break;
		case 2: display(); break;
		case 3: insert_rear(); break;
		case 4: delete_rear(); break;
		case 5: insert_front(); break;
		case 6: delete_front(); break;
		case 7:  exit(0); 
		default: printf("Invalid choice\n");
		}
	}
}






