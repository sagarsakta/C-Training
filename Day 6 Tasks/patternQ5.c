#include<stdio.h>
int main()
{
	int i,j,k,n,l=1;
		printf("enter no of rows");
	 scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=n-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{

	        if(i%2!=0)
		{
			printf("* ");
			l=l+1;

		}
		else
		{
			printf("%d ",l);
		       l=l+1;
		
		}

		
	        }
		printf("\n");
	}
	return 0;

}
