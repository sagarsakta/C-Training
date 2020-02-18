#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *next;
};
   struct node *rear=0;
   struct node *front=0;

   void enque();
   void deque();
   void peek();
   void display();

   int main()
{
	int a;
	printf("enter 1 for inserting data\n");
	printf("enter 2 for inserting data\n");
	printf("enter 3 for getting 1st element");
	scanf("%d", &a);
	while(a<4)
	{
	if(a==1)
	{
		enque();
		display();
	}
	else if(a==2)
	{
		deque();
		display();
	}
	else if(a==3)
	{
		peek();
		display();
	}
	printf("Again ask the choice from user");
	scanf("%d", &a);
	}
	return 0;
}

void enque()
{
	struct node *newnode;
        newnode= (struct node*) malloc(sizeof(struct node));
	printf("enter the data");
	scanf("%d", &newnode->data);
	if(front==0 && rear==0)
	{
		front=rear=newnode;
	}
	else
	{
	rear->next=newnode;
	rear=newnode;
	}
}

 void deque()
{
  struct node *temp;
  temp=front;
  if(front==0)
  {
	  printf("queue is empty");
  }
  else
  {
	 front =front->next;
	 free(temp);
}
}

void peek()
{
	if(front==0 && rear==0)
	{
		printf("no element in queue");
	}
	else
	{
          printf("%d\n", front->data);
	}
}

 void display()
{
	struct node *temp;
	if(rear==0 && front ==0)
	{
		printf("Queue is empty");
	}
	else
	{
		temp=front;
		while(temp!=0)
		{
			printf("%d", temp->data);
			temp=temp->next;
		}
	}
}

