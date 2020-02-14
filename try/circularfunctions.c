#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    };
    
   struct node *head=NULL;
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
       printf("enter 1 to insert at beginning");
       printf("enter 2 to insert at last");
       printf("enter 3 to insert at specific position");
       printf("enter 4 to delete at beginning");
       printf("enter 5 to delete at last");
       printf("enter 6 to delete at specific position");
       printf("enter 7 to display");
       printf("enter 8 to exit");
       
       scanf("%d", &a);
       while(a<8)
        {
            if(a==1)
            {
                insertbegining();
            }
            else if(a==2)
            {
                insertlast();
                
            }
            else if(a==3)
            {
                insertspecific();
            }
            else if(a==4)
            {
                deletebegining();
            }
            else if(a==5)
            {
                deletelast();
            }
            else if(a==6)
            {
                deletespecific();
            }
            else if(a==7)
            {
                display();
            }
            
        }
       return 0;
   }
   void insertbeginning()
   {
     struct node *newnode;
     newnode= (struct node*) malloc(sizeof(struct node));
     printf("enter data");
     scanf("%d", &newnode->data);
     if(head==NULL)
     {
       head=newnode;
       newnode->next=head;
     }
     else{
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
	struct node *temp, *tail;
	temp=tail->next;
	if(tail==NULL)
	{
		printf("list is empty");
	}
	else if(temp==tail)
	{
		tail=NULL;
		free(temp);
	}
	else
	{
		tail->next=temp->next;
		free(temp);
}
}
   void deletelast()
{
	struct node *tail,*current, *previous, *temp;
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
	struct node *current,  *nextnode;
	int pos,i=1;
	current=tail->next;
	printf("enter position u want to delete");
	scanf("&d", &pos);
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
       
       struct node *temp;
       temp=head;
      
       while(temp->next!=head)
       {
           printf("%d ",temp->data);
           temp=temp->next;
       }
   }
