#include<stdio.h>
#include<stdlib.h>

struct node
{
 struct node *left;
 int data;
 struct node *right;
};

typedef struct node * bst;

bst root=NULL,cur,prev;

void insert(int item)
{
bst temp;
temp= (struct node *)malloc(sizeof(struct node));
temp->data = item;
temp->left = temp->right = NULL;
if(root == NULL)
{
	root=temp;
	return;
}
cur=root;
while(cur!=NULL)
{
	prev=cur;
	if (item < (cur->data))
		cur=cur->left;
	else if(item > (cur->data))
		cur=cur->right;
	else
		return;
}
if(item < prev->data)
	prev->left=temp;
else
	prev->right=temp;
}

void search(bst temp, int key)
{
	if(temp == NULL)
	{
		printf("\nElement not found");
	}
	else if(key < temp->data)
	{
		search(temp->left,key);
	}
	else if(key > temp->data)
	{
		search(temp->right,key);
	}
	else
	{
		printf("\nElement found");
	}

}

void inorder(bst temp)
{
 if(temp != NULL)
 {
	inorder(temp->left);
	printf("%d\t", temp->data);
	inorder(temp->right);
 }
}

void preorder(bst temp)
{
	if(temp != NULL)
	{
		printf("%d\t",temp->data);
		preorder(temp->left);
		preorder(temp->right);
	}
}

void postorder(bst temp)
{
	if(temp != NULL)
	{
		postorder(temp->left);
		postorder(temp->right);
		printf("%d\t", temp->data);
	}
}

bst find_minimum(bst temp)
{
    if(temp == NULL)
	return NULL;
    else if(temp->left != NULL) // node with minimum value will have no left child
	return find_minimum(temp->left); // left most element will be minimum
    return temp;
}

void main()
{
int item, ch, i, n;

while(1)
{
printf("\n1.Create\n2.Search\n4.Inorder\n5.Preorder\n6.Postorder\n7.Exit");
printf("\n Enter your choice: ");
scanf("%d", &ch);
switch(ch)
{
case 1:         printf("Enter number of node elements\n");
		scanf("%d", &n);
		printf("\nEnter items to create BST like (6,9,5,2,8,15,24,14,7,8,5,2)\n");
		for(i=1;i<= n;i++)
		{
			scanf("%d", &item);
			insert(item);
		}
		break;
case 2: printf("\n Enter the element to search: ");
		scanf("%d", &item);
		search(root, item);
		break;
case 4: printf("\n Inorder Traversal: \n"); 
		inorder(root);
		break;
case 5: printf("\nPreorder Traversal: \n"); 
		preorder(root);
		break;
case 6: printf("\nPostorder Traversal: \n"); 
		postorder(root);
		break; 
case 7: exit(0);
default: printf("\n Wrong option"); 
}

}

}