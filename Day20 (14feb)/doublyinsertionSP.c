#include<stdio.h>
#include<stdlib.h>
struct node{
        int data;
        struct node *next;
        struct node *prev;
};
  struct node *head;
  void insertsp();
  void display();
  void insertbegining();
  int main()
{
	int a;
	printf("enter 1 for beginning insertion\n");
	printf("enter 2 for specific insertion\n");
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
			insertsp();
			display();

		}
		else if(a==3)
		{
			printf("Exit ");
		}
		printf("ask what user want to enter 1 or 2");
		scanf("%d", &a);
	}			
        insertsp();
	insertbegining();
        display();
        return 0;
}
void insertsp()
{
        struct node *temp, *newnode;
	int pos,i=1;
	printf("enter position u want to enter data");
	scanf("%d",&pos);
	 if(pos==1)
	 {
		 insertbegining();
	 }
	 else
	 {
		 temp=head;
        
                newnode= (struct node*) malloc(sizeof(struct node));
                printf("enter the data");
                scanf("%d", &newnode->data);
                newnode->next=NULL;
                newnode->prev=NULL;
                
		while(i<pos-1)
		{
			temp=temp->next;
			i++;
		}
	
		newnode->prev=temp;
		newnode->next=temp->next;
                temp->next=newnode;
		newnode->next->prev=newnode;
                
              
        }
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


