#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("Enter the value of n");
	scanf("%d", &n);


  struct student {
          int id;
	  char name;
          float percent;
  };
    struct student *ptr = (struct student*) malloc (n*sizeof(struct student));
    for(int i=0;i<n;i++)
    {
	    scanf(" %d", &ptr[i].id);
	    scanf(" %c", &ptr[i].name);
	    scanf(" %f", &ptr[i].percent);
    }
    for(int i=0;i<n;i++)
    {

	    printf(" %d", ptr[i].id);
            printf(" %c", ptr[i].name);
            printf(" %f", ptr[i].percent);
    }

return 0;
}

	  
