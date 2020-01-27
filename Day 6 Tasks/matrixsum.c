#include<stdio.h>
int main()
{
	int arr1[10][10], arr2[10][10],i,j,a,b,sum[10][10];
	printf("Enter the no of rows and columns");
	scanf("%d%d", &a, &b);
	printf("Enter  elements of 1st matrix");
	for(i=0;i<a;i++)
	{
	for (j=0;j<b;j++)
        
	       scanf("%d",&arr1[i][j]);
	}
printf("Enter elements of second matrix");	
       for(i=0;i<a;i++)
       {
        for (j=0;j<b;j++)
        
               scanf("%d",&arr2[i][j]);
       }
       printf("sum of 2 matrices is");
        
       for(i=0;i<a;i++)
       {
        for (j=0;j<b;j++)
	{
		sum[i][j]= arr1[i][j] + arr2[i][j];
       printf("%d",sum[i][j]);
       }
       printf("\n");
}
        return 0;
}
