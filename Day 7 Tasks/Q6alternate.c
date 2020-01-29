#include<stdio.h>
int main()
{
	int i,j,n,s[3][3],l=0;
	printf("Enter its dimension");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&s[i][j]);
		}
	}
	
	for(j=0;j<n;j++)
	{
		while(l<n)
		{
			printf("%d",s[j][l]);
			l=l+2;
		}
		l=l%n;
	}
	return 0;
}


