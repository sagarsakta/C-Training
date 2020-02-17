#include<stdio.h>
#include<stdlib.h>

struct node{
                int data;
                struct node *next;
        };
    int choice=1;
    struct node *head;

void display();
void insertbegining();
void insertlast();
void insertspecific();
void deletebegining();
void deletelast();
void deletespecific();
void reverse();


int main()
{
	
        int a;
   printf("Enter 0 for reverse\n");
   printf("Enter 1 for insert at beginning\n");
   printf("enter 2 for insert at last\n");
   printf("enter 3 for insert at specific position\n");
   printf("enter 4 for delete at beginning\n");
   printf("enter 5 for delete at last\n");
   printf("enter 6 for delete at specific position\n");
   printf("enter 7 to exit");
   
   do{
	   scanf("%d",&a);
	   if(a==0)
	   {
		   reverse();
		   display();
	   }
   else if(a==1)
   {
	   insertbegining();
	   display();
   }
   else if(a==2)
   {
	   insertlast();
	   display();
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
	  printf("ready to exit");
   }
   
   }
   while(a<7);
   return 0;
}


void reverse()
{
        struct node  *prev, *curr, *nextnode;
        prev=0;
        curr=nextnode=head;
        while(nextnode!=0)
        {
                nextnode=nextnode->next;
                curr->next=prev;
                prev=curr;
                curr=nextnode;
        }
        head=prev;
}


void insertbegining()
{
	struct node *newnode;
	newnode =(struct node *) malloc(sizeof(struct node));
	printf("enter the data u want");
	scanf("%d", &newnode->data);
	if(head==NULL)
	{
	newnode->next=NULL;
	head=newnode;}
	else
	{
		newnode->next=head;
		head=newnode;
	}
	
}

void insertlast()
{
	struct node *newnode,*temp;
	newnode =(struct node *) malloc(sizeof(struct node));
        printf("enter the data u want");
        scanf("%d", &newnode->data);

	newnode->next=NULL;
        temp=head;
        while(temp->next!=NULL)
        {
                temp=temp->next;
        }
              temp->next =newnode;
           

}



void insertspecific()
{
	struct node *temp, *newnode;

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

}
   
 void deletebegining()
{
	struct node *temp;

	printf("do you want to delete list at beggining?(0,1)");
          scanf("%d",&choice);


	while(choice)
	{
          if(head==NULL)
		{
			printf("List is empty");
		}
		else
		{
			temp=head;
			head=head->next;

		}
		choice=0;
	}

}


void deletelast()
{
	struct node *temp, *previous;

	printf("do you want to delete list at last?(0,1)");
          scanf("%d",&choice);
          
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

}


void deletespecific()

{
	struct node *temp, *nextnode;
          int pos,i=1;
          printf("enter position where u want to delete");
          scanf("%d", &pos);
          temp=head;

        while(i<pos)
        {
          temp=temp->next;
          i++;

        }
         nextnode=temp->next;
         temp->next=nextnode->next;
         temp=head;
                
        

}

 void display()
{
	struct node *temp;
	temp=head;

        while(temp!=NULL)
        {
                printf("%d ",temp->data);
                temp=temp->next;
        }
}

