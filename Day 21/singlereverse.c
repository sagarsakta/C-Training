#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
void reverse
();
void display();
 int main()
{
	create();
	display();
}
 void reverse()
{
	struct *prev, *curr, *nextnode;
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

