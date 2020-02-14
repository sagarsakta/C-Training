#include<stdio.h>
#include<stdlib.h>
struct node{
        int data;
        struct node *next;
        struct node *prev;
};
  struct node *head;
  void insertbegining();
  void display();
  int main()
{
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


