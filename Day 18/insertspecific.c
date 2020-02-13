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
         printf("do you want to enter data at specific position?(0,1)");
          scanf("%d",&choice);
	  int pos,i=1;
          printf("enter the position where u want to enter");
	  scanf("%d",&pos);
		  temp=head;
		  while(i<pos)
		  {
			  temp=temp->next;
			  i++;
	
		  }	
	  
		  newnode= (struct node *) malloc(sizeof(struct node));
		  printf("enter data");
		  scanf("%d", &newnode->data);
		  newnode->next= temp->next;
		  temp->next=newnode;
	 	
        
         temp=head;

        while(temp!=0)

        {
                printf("%d ",temp->data);
                temp=temp->next;
        }

        return 0;

}
