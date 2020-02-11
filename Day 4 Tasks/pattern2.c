#include<stdio.h>
int main()
{
	int i,j;
	int k=1;
	int n;
	printf("enter no of rows");
	scanf("%d", &n);
	for( i=0;i<n;i++)
	{
		for(j=n;j>i;j--)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			if(k==10)
			{
				k=0;
			}
			printf("%i",k++);
		}
		printf("\n");
	}

	return 0;
}

