#include<stdio.h>
#include<stdlib.h>
 struct node{
	 int data;
	 struct node *next;
 };
  struct node *rear=0;
  struct node *front=0;

  void enque();
  void deque();
  void display();
  int main()
{
	int a=0;
	printf("enter 1 for inserting data");
	scanf("%d", &a);
	while(a<4)
	{
          if(a==1)
	  {
		  enque();
		  display();
	  }

           printf("again ask choice from user");
	   scanf("%d", &a);
	}
	return 0;
}
    void enque()
{
	struct node *newnode;
	newnode= (struct node*) malloc(sizeof(struct node));
	printf("enter data");
	scanf("%d", &newnode->data);
	newnode->next=0;
	if(rear==0 && front==0)
	{
		rear=newnode;
		front=newnode;
		rear->next=front;
	}
	else{
		rear->next=newnode;
		rear= newnode;
		rear->next=front;
              }

}
   


 void display()
{
	struct node *temp;
	if(front==NULL&& rear==NULL)
	{
		printf("queue is empty");
	}
	else
	{
		temp=front;
		printf("Your linked list uptil now:");
		while(temp->next!= front)
		{
			printf("%d ", temp->data);
			temp=temp->next;
		}
		printf("%d\n", temp->data);
	}
}

