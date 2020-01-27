#include<stdio.h>
int main()
{
int i,j=1,n,k=1;
printf("Enter no of rows");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	for (j=1;j<=n;j++)
	{
		if(i>=j)
		{
			printf("%d",k);
			k+=2;
		}
		else
		{
			printf(" ");
		}
	}
	printf("\n");
}
return 0;

}
