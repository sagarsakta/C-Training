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
	
        return 0;


}

