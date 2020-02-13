#include<stdio.h>
#include<stdlib.h>
int main()
{
        struct node{
                int data;
                struct node *next;
        };

        struct node *head=NULL,*temp, *newnode;
        int choice=1;

        while(choice)
        {
         newnode =(struct node *) malloc(sizeof(struct node));
        printf("enter the data u want");
        scanf("%d", &newnode->data);
        newnode->next=0;


        if(head==NULL)
        {
          head=newnode;

          temp=head;
        }
        else
        {
                temp->next=newnode;
                temp=newnode;
        }
         printf("do you want to continue?(0,1)");
        scanf("%d", &choice);


        }

       temp=head;

        while(temp!=0)
        {
                printf("%d ",temp->data);
                temp=temp->next;
        }
          
       	printf("do you want to delete list at last?(0,1)");
          scanf("%d",&choice);
          struct node *previous;
	  temp=head;

        while(temp->next!=0)
	{
		previous=temp;
		temp=temp->next;
	}
         if(temp==head)
	 {
	printf("head is NULL");
	 }
	else
	{
	previous->next=0;
	}	
          return 0;
	  }
