#include<stdio.h>
#include<stdlib.h>
struct node{
        int data;
        struct node *next;
        struct node *prev;
};
  struct node *head;
  void deletesp();
  void display();
  void insertbegining();
  void deletebeg();
  int main()
{
        int a;
        printf("enter 1 for beginning insertion\n");
        printf("enter 2 for deletion at specific position\n");
        printf("enter 3 to exit\n");
        scanf("%d",&a);
        while(a<3)
        {
		if(a==0)
		{
			deletebeg();
			display();
		}

		else if(a==1)
                {
                        insertbegining();
                        display();
                }
                else if(a==2)
                {
                        deletesp();
                        display();

                }
                else if(a==3)
                {
                        printf("Exit ");
                }
                printf("ask what user want to enter 1 or 2");
                scanf("%d", &a);
        }
        deletesp();
        insertbegining();
	deletebeg();
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

		
		

  void deletebeg()
{
        struct node *temp,*prev;
        if(head==NULL)
        {
                printf("list is empty");
        }
        else
        {
                temp=head;
                head=head->next;
                head->prev=0;
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




