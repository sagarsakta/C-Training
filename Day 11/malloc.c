#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,*ptr,i,sum=0;
	printf("Enter no of elements");
	scanf("%d", &n);
	ptr= (int*) malloc(n* sizeof(int));
	if(ptr==NULL)
	{
		printf("Nothing can be allocated");
	}
	else
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",&ptr[i]);
			sum=sum + *(ptr+i);
		}
		printf("%d",sum);
	}
        return 0;

}

