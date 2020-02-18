#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *top=NULL;

  void push();
  void topest();
  void pop();
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
		else if(a==2)
		{
			topest();
			display();
		}
		else if(a==3)
		{
			pop();
			display();
		}

		printf(" again ask choice\n");
		scanf("%d", &a);
	}
	return 0;
}
 void push()
{
	struct node  *newnode;
	newnode= (struct node*) malloc(sizeof(struct node));
	printf("enter the data u want");
	scanf("%d", &newnode->data);
	newnode->next=top;
	top=newnode;
}

void topest()
{
	
    if(top==0)
    {
	    printf("stack is empty");
    }
    else
    {
	    printf(" topmost element is %d\n" , top->data);
    }

}
   void pop()
{
	
	if(top==0)
	{
		printf("stack is empty");
	}
	else
	{
          struct node *temp;
	  temp= top;
	  printf("popped item is %d\n", top->data);
	  top=top->next;
	  free(temp);
	}
}

  void display()
{

	struct node *temp=top;
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
