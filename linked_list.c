#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *newnode,*head=NULL;
void beg()
{
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("enter the data:");
 	scanf("%d",&newnode->data);
	newnode->next=head;
	head=newnode;
}
void traversal()
{
	struct node *temp;
	if(head==NULL)
	printf("List is empty\n");
	else
	{
		temp=head;
		while(temp!=NULL)
		{
			printf("%d\t",temp->data);
			temp=temp->next;
		}
	}
}
void end()
{       struct node *temp;
 	newnode=(struct node *)malloc(sizeof(struct node));
 	printf("enter the data:");
	scanf("%d",&newnode->data);
 	newnode->next=NULL;
 	temp=head;
	if(temp==NULL)
	head=newnode;
	else
	{
 		while(temp->next!=NULL)
		{
 			temp=temp->next;
 		}
		temp->next=newnode;
	}
}
int count()
{
    struct node *temp;
	int count=0;
	temp=head;
	while(temp!=NULL)
	{
	    temp=temp->next;
		count++;
	}
	return count;
}
void position()
{
	struct node *temp;
	int pos,i;
	temp=head;
 	newnode=(struct node *)malloc(sizeof(struct node));
 	printf("enter the data:");
	scanf("%d",&newnode->data);
	printf("Enter the position where node is to be inserted:");
	scanf("%d",&pos);
	pos=pos-1;
	if(pos>count())
	printf("Invalid position");
	else
	{
	    for(i=0;i<pos-1;i++)
	    {
	      temp=temp->next;  
	    }
	    newnode->next=temp->next;
	    temp->next=newnode;
	    
	}
	
}
void main()
{
	int c,x;
 
   
 	while(1)
	{
 		printf("1.insertion at beginning\n");
 		printf("2.insertion at end\n");
 		printf("3.insertion at a particular position\n");
 		printf("4,Display LL\n");
 		printf("5.Exit\n");
 		printf("Enter choice\n");
 		scanf("%d",&c);
 		switch(c)
		{
 		case 1:
 			beg();
			break;
 		case 2:
 			end();
		 	break;
 		case 3:
 			position();
 			break;
		case 4:
 			traversal();
         		break;
         
		case 5:
 			exit(0);
 		default:printf("wrong choice");
}
}
}

