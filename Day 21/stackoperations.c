#include<stdio.h>
#include<stdlib.h>
int stack[5];
int top=-1;
void push();
void pop();
void topest();
void display();
 int main()
{
	int x;
	printf("enter the choice\n");
	scanf("%d", &x);
	while(x<4)
	{
		if(x==1)
		{
	push();
	display();
		}

		if(x==2)
		{
			pop();
			display();
		}
		if(x==3)
		{
			topest();
			display();
		}

		printf("again ask for choice from user\n " );
		scanf("%d", &x);
	}
	return 0;
}
void push()
{
	int a;
	
	printf("enter the new data");
	scanf("%d", &a);
	if(top==4)
	{
		printf("stack is full, overflow");
	}
	else
	{
		top++;
		stack[top]= a;
	}
	
}
 
   void pop()
{
int item;
if(top==-1)
{
	printf("Stack is empty, underflow");

}
else
{
	item= stack[top];
	top--;
	printf(" %d is the popped item from stack\n ", item);
}
}

void topest()
{
	if(top==-1)
	{
		printf("Stack is empty");
	}
	else
	{
		printf("topmost element of stack is %d " , stack[top]);
	}
}

	void display()
	{
		int i;
		for(i=top;i>=0;i--)
		{
			printf("%d", stack[i]);
		}
	}
