#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i;
	printf("enter no of objects");
	scanf("%d",&n);
	struct demo{
		char name[10];
		int id;
	};
	struct demo *ptr =(struct demo*) malloc (n*sizeof(struct demo));
        for(i=0;i<n;i++)
	{
		printf("enter name");
		scanf(" %[^\n]s", ptr[i].name);
                printf("enter the id");
		scanf(" %d", &ptr[i].id);
	}
	for(i=0;i<n;i++)
	{
		if(ptr[i].id%2==0)
		{
			printf("%s", ptr[i].name);
		}
	}

	return 0;

}
