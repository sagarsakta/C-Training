#include<stdio.h>
#include<stdlib.h>
 struct node {
	 int data;
	 struct node *prev;
	 struct node *next;
 };
   struct node *head=NULL;
void creation();
void insertbeg();
void insertlast();
void insertsp();
void deletebeg();
void deletelast();
void deletesp();
void display();

 int main()
{
	int a=0;
	while(a<8)
	{
	printf("enter 1 for creation of list\n");
	printf("enter 2 for insert at begining\n");
	printf("enter 3 for insert at last\n");
	printf("enter 4 for insert at specific\n");
	printf("enter 5 for delete the data at begning\n");
	printf("enter 6 for delete at last\n");
	printf("enter 7 for delete at specific position\n");
	scanf("%d", &a);

	if(a==1)
	{
		creation();
		display();
	}
	else if(a==2)
	{

		insertbeg();
		display();
       }
	else if(a==3)
	{
		insertlast();
		display();

	}
       else if(a==4)
       {
	       insertsp();
	       display();
       }
       else if(a==5)
       {
	       deletebeg();
	       display();
       }
	else if(a==6)
	{
		deletelast();
		display();
	}
	else if(a==7)
	{
		deletesp();
		display();
	}
	else
	{
		printf("Exit");
	}
	}
	return 0;

}
void creation()
{
	struct node *temp, *newnode;
	int choice=1;
	while(choice)
	{
	newnode= (struct node*) malloc(sizeof(struct node));
	printf("enter data");
	scanf("%d", &newnode->data);
	
	
        if(head==NULL)
	{
		head=newnode;
		head->prev=head;
		head->next=head;
	}
	else
	{
		temp=head;
		while(temp!=head->prev)
		{
		 temp=temp->next;
		}
		temp->next=newnode;
		newnode->prev=temp;
		newnode->next=head;
		head->prev=newnode;
		temp=newnode;
	}
	
	printf("Do you want to continue(0,1)");
	scanf("%d", &choice);
	}
}
   void insertbeg()
{

	struct node *newnode, *temp;
	newnode= (struct node*) malloc(sizeof(struct node));
	printf("Enter the data u want at begining");
	scanf("%d", &newnode->data);
	temp=head;
	if(head==NULL)
	{
		head=newnode;
		newnode->next=head;
		newnode->prev=head;
	}
	else
	{
		while(temp!=head->prev)
		{
			temp=temp->next;
		}
		newnode->next=head;
		head->prev=newnode;
		newnode->prev=temp;
		temp->next=newnode;
		head=newnode;
        }
}
   
	 void insertlast()
{

        struct node *newnode, *temp;
	
        newnode= (struct node*) malloc(sizeof(struct node));
        printf("Enter the data u want at last");
        scanf("%d", &newnode->data);
        temp=head;
        if(head==NULL)
        {
                head=newnode;
                newnode->next=head;
                newnode->prev=head;
        }
        else
        {
                while(temp!=head->prev)
                {
                        temp=temp->next;
                }
                temp->next=newnode;
                newnode->next=head;
                newnode->prev=temp;
                head->prev=newnode;
                temp=newnode;
        }

}

  void insertsp()
{
	int pos, i=1;
	printf("enter the position where u want to insert data");
	scanf("%d",&pos);
	if(pos==1)
	{
		insertbeg();
		display();
	}
	else
	{
        struct node *newnode, *temp;
        newnode= (struct node*) malloc(sizeof(struct node));
        printf("Enter the data");
        scanf("%d", &newnode->data);
	temp=head;
         while(i<pos-1)
                {

                        temp=temp->next;
                        i++;
                }
	 newnode->next=temp->next;
	 newnode->prev=temp;
	 temp->next->prev=newnode;
	 temp->next=newnode;
         

}
}

void deletebeg()
{
	struct node *temp, *tail;
	temp=tail=head;
	if(head==NULL)
	{
		printf("list is empty");
	}
	else
	{
		while(tail->next!=head)
		{
                 tail=tail->next;
		}
		head=head->next;
		head->prev=tail;
		tail->next=head;
		free(temp);
	}
}

void deletelast()
{
       
	struct node *temp, *tail;
        temp=tail=head;
        if(head==NULL)
        {
                printf("list is empty");
        }
        else
        {
		while(temp->next!=head)
		{
			temp=temp->next;
		}
		tail=tail->next;
		tail->next=head;
		head->prev=tail;
		free(temp);
	}


}

void deletesp()
{
	struct node *temp;
	int pos,i=1;
	printf("enter position where u want to delete the data");
	scanf("%d",&pos);
	if(pos==1)
	{
		deletebeg();
	}
	else
	{
		temp=head;
		while(i<pos)
		{
			temp=temp->next;
			i++;

		}
                temp->prev->next=temp->next;
		temp->next->prev=temp->prev;
		free(temp);
	}
}



    void display()
{
	struct node *temp;
	temp=head;
	if(head==NULL)
	{
		printf("List is empty");
	}
	else
	{
		while(temp!= head->prev)
		{
			printf("%d ", temp->data);
			temp=temp->next;
		}
		printf("%d\n", temp->data);
	}
}
