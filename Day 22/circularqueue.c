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
  void peek();
  void display();
  int main()
{
	int a=0;
	printf("enter 1 for inserting datau\n");
	printf("enter 2 for deleting data\n");
	printf("enter 3 for showing peek data\n");
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

 void deque()
{
	struct node *temp;
	temp=front;
	if(front==0 && rear==0)
	{
		printf("queue is empty");
	}
	else if(front==rear)
	{
            front=rear=0;
	    free(temp);
	}
	else
	{
		
		front=front->next;
		rear->next= front;
		free(temp);
	}
}

  void peek()
{
	
	if(front==0 && rear==0)
	{
		printf("list is empty");
	}
	else
	{
		printf("%d", front->data);
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

