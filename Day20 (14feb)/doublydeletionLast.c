#include<stdio.h>
#include<stdlib.h>
struct node{
        int data;
        struct node *next;
        struct node *prev;
};
  struct node *head;
  void deletelast();
  void display();
  void insertbegining();
  int main()
{
        int a;
        printf("enter 1 for beginning insertion\n");
        printf("enter 2 for deletion at last\n");
        printf("enter 3 to exit\n");
        scanf("%d",&a);
        while(a<3)
        {
                if(a==1)
                {
                        insertbegining();
                        display();
                }
                else if(a==2)
                {
                        deletelast();
                        display();

                }
                else if(a==3)
                {
                        printf("Exit ");
                }
                printf("ask what user want to enter 1 or 2");
                scanf("%d", &a);
        }
        deletelast();
        insertbegining();
        display();
        return 0;
}

       void insertbegining()
{
        struct node *temp, *newnode;
       int choice=1;
        while(choice)
        {
                newnode= (struct node*) malloc(sizeof(struct node));
                printf("enter the data");
                scanf("%d", &newnode->data);
                newnode->next=NULL;
                newnode->prev=NULL;

                if(head==NULL)
                {
                        head=temp=newnode;
                }
                else
                {
                        head->prev=newnode;
                        newnode->next=head;
                        head=newnode;
                }
                printf("do you want to continue (0,1)");
                scanf("%d",&choice);
        }
}
       void deletelast()
{
	struct node *temp;
	temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	if(head==0)
	{
		printf("list is empty");
	}
	else
	{
		temp->prev->next=0;
		free(temp);
	}
}

    
  void display()
        {
                struct node *temp;
                temp=head;
                 while(temp!=0)
                {
                        printf(" %d",temp->data);
                        temp=temp->next;
                }
        }







