#include<stdio.h>
void swaparray(int[],int);
int main()
{
	int arr[5],i;
	printf("Enter 5 array elements");
	for(i=0;i<5;i++)
	{
	scanf("%d",&arr[i]);
	}
	swaparray(arr,5);
	return 0;
}
void swaparray(int arr[],int n)
{
	int i,temp;
   for(i=0;i<n/2;i++)
   {
	  temp =arr[i];
	  arr[i]=arr[n-1-i];
	  arr[n-1-i]=temp;
   }
   for(int i=0;i<n;i++)
    printf("%d",arr[i]);
}
 
