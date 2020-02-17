#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};

  void push();
  void display();

  int main()
{
	int a;
	printf("enter the choices user want");
	scanf("%d", &a);
	while(a<4)
	{
		if(a==1)
		{
			push();
			display();
		}
		printf(" again ask choice\n");
		scanf("%d", &a);
	}
	return 0;
}
 void push()
{
	struct node *top=0, *newnode;
	newnode= (struct node*) malloc(sizeof(struct node));
	printf("enter the data u want");
	scanf("%d", &newnode->data);
	newnode->next=top;
	top=newnode;
}
  void display()
{

	struct node *temp, *top;
	if(top==0)
	{
		printf("stack is empty");
	}
	else
	{
		while(temp!=0)
		{
			printf("%d", temp->data);
			temp=temp->next;
		}
	}
}
