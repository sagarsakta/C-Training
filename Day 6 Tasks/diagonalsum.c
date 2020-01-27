#include<stdio.h>
int  main()
{
	int a[5][5],i,j;
	printf("Enter 5 numbers");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int sum=0;
		for(i=0;i<5;i++)
		{
		for(j=0;j<5;j++)
		{
			if(i>j)
			{
				sum=sum+ a[i][j];
		}

		}
		}
		printf("%d" ,sum);
		return 0;
	}
