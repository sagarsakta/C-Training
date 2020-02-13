#include<stdio.h>
#include<stdlib.h>
int main()
{
	struct node{
		int data;
		struct node *next;
	};
	struct node *head,*temp, *newnode;


         newnode =(struct node *) malloc(sizeof(struct node));
	printf("enter the data u want");
	scanf("%d", &newnode->data);
	newnode->next=0;
	temp=head;
	while(temp->next!=0)
	{
		temp=temp->next;
	}
	      temp->next =newnode;
	      while(temp!=0)
	      {
		      printf("%d",temp->data);
		      temp=temp->next;
	      }
	      return 0;
}
