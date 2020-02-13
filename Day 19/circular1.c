#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
void circular();
void display();
int main()
{
   
 struct node *head, *temp;
 circular();
 display();
 return 0;
}
  void circular()
{
	int choice,*temp;
	head=NULL;
	struct node *newnode;
	newnode= (struct node *) malloc (sizeof(struct node));
			printf("enter data");
			scanf("%d", &newnode->data);
			newnode->next=0;
			if(head==NULL)
			{
			 head=newnode;
			 }
			 else
			 {
			 temp->next= newnode;
			 temp=newnode;
			 }
			 temp->next=head;
			 printf("Do you want to continue(0,1)");
			 scanf("%d", &choice);
			 printf("%d", temp->next->data);
			 
}
 void display()
{
	struct node *temp;
	if(head==0)
	{
		printf("List is empty");
	}
	else
	{
		temp=head;
		while(temp->next!=head)
		{
			printf("%d",temp->data);
			temp=temp->next;
		}
	}
	printf("%d", temp->data);
}
