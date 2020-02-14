#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    };
    
   struct node *head=NULL;
   void create();
   void display1();
   void insertbegining();
   void insertlast();
   void insertspecific();
   void deletebegining();
   void deletelast();
   void deletespecific();
   void display();
   int main()
   {
       int a;
       printf("enter 0 to create list");
       printf("enter 1 to insert at beginning\n");
       printf("enter 2 to insert at last\n");
       printf("enter 3 to insert at specific position\n");
       printf("enter 4 to delete at beginning\n");
       printf("enter 5 to delete at last\n");
       printf("enter 6 to delete at specific position\n");
       printf("enter 7 to display\n");
       printf("enter 8 to exit\n");
       
       scanf("%d", &a);
       while(a<8)
       
        {
		if(a==0)
		{
			create();
			display1();
		}
		else if(a==1)
            {
                insertbegining();
		display();
	
            }
            else if(a==2)
            {
                insertlast();
		display1();
                
            }
            else if(a==3)
            {
                insertspecific();
		display();
            }
            else if(a==4)
            {
                deletebegining();
		display();
            }
            else if(a==5)
            {
                deletelast();
		display();
            }
            else if(a==6)
            {
                deletespecific();
		display();
            }
            else if(a==7)
            {
                display();
            }
	    printf("enter the choice from 0 to 7 ");
            scanf("%d",&a);
        }
       return 0;
   }

     void create()
   {
     int choice=1;  
   struct node *newnode, *temp;
       while(choice)
       {
       newnode= (struct node*) malloc(sizeof(struct node));
       printf("enter data ");
       scanf("%d",&newnode->data);
       
       if(head==NULL)
       {
           head=newnode;
           newnode->next=head;
       }
       else
       {
             temp=head;
             while(temp->next!=head)
             {
                 temp=temp->next;
             }
                   temp->next=newnode;
                   newnode->next=head;
       }
       printf("do you want to continue(0,1)");
       scanf("%d",&choice);
       
       }
       
   }
   void display1()
   {
       
       struct node *temp;
       temp=head;
      
       while(temp->next!=head)
       {
           printf("%d ",temp->data);
           temp=temp->next;
           
       }
       printf("%d",temp->data);
       
   }



   void insertbegining()
   {
     struct node  *newnode;
     newnode= (struct node*)malloc(sizeof(struct node));
     printf("enter data");
     scanf("%d", &newnode->data);
     if(head==NULL)
     {
       head=newnode;
       head->next=newnode;
     }
     else
     {
	     struct node *curr=head;
	     while(curr->next!=head)
	     {
		     curr=curr->next;
	     }
	     curr->next=newnode;
	     newnode->next=head;
	     head=newnode;

     }
    
   }
   
   void insertspecific()
   {
       struct node *temp, *newnode,*tail;
       int i=1,pos;
       printf("enter position where u want to enter");
       scanf("%d", &pos);
       if(pos==1)
       {
	       insertbegining();
       }
       else
       {
	       newnode= (struct node*) malloc (sizeof(struct node));
	       printf("enter data");
	       scanf("%d",&newnode->data);
	       temp=tail->next;
	       while(i<pos-1)
	       {
		       temp=temp->next;
		       i++;
	       }
	       newnode->next=temp->next;
	       temp->next=newnode;
       }
   }
   
   
   
   
   
   void insertlast()
   {
       int choice=1;
       
   struct node *newnode, *temp;
   while(choice)
   {
    newnode= (struct node*) malloc(sizeof(struct node));
       printf("enter data ");
       scanf("%d",&newnode->data);
       
       if(head==NULL)
       {
           head=newnode;
           newnode->next=head;
       }
       else
       {
             temp=head;
             while(temp->next!=head)
             {
                 temp=temp->next;
             }
                   temp->next=newnode;
                   newnode->next=head;
       }
       printf("do you want to continue(0,1)");
       scanf("%d",&choice);
       
       }
       
   }

    void deletebegining()
{
      struct node *tail=head;

	while(tail->next!=head)
	{
		tail=tail->next;
	}
	struct node *temp=head;
	if(head==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		while(temp->next!=head)
		{
			temp=temp->next;
		}
		head=head->next;
		temp->next=head;
	}
}
   void deletelast()
{
	struct node *tail,*current, *previous, *temp;
	tail=head;
        while(tail->next!=head)
        {
                tail=tail->next;
        }

	current=tail->next;
	if(tail==NULL)
	{
		printf("list is empty");
	}
	else if(current->next==current)
	{
		tail=NULL;
		free(current);
	}
	else
	{
		while(current->next!=tail->next)
		{
			previous=current;
			current=current->next;
		}
		previous->next=tail->next;
		tail=previous;
		free(current);
	}

}
void deletespecific()
{
	struct node *current,  *nextnode, *tail;
	tail=head;
        while(tail->next!=head)
        {
                tail=tail->next;
        }

	int pos,i=1;
	current=tail->next;
	printf("enter position u want to delete");
	scanf("%d", &pos);
	if(pos==1)
	{
		deletebegining();
	}
	else
	{
		while(i<pos-1)
		{
			current=current->next;
			i++;
		}
		nextnode=current->next;
		current->next=nextnode->next;
		free(nextnode);
	}
	
}
   

   void display()
   {
       
       struct node *temp, *tail;
       tail=head;
        while(tail->next!=head)
        {
                tail=tail->next;
        }

       if(tail==0)
       {
	       printf("list is empty");
       }
       else{
	       temp=tail->next;

       while(temp->next!=tail->next)
       {
           printf("%d ",temp->data);
           temp=temp->next;
       }
       printf("%d",temp->data);
   
       }
   }
