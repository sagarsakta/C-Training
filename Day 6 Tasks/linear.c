#include<stdio.h>
int main()
{
	int arr[5],n,i;
	 printf("Enter 5 elements");

	for(i=0;i<5;i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("Enter searching element");
	scanf("%d", &n);
	for(i=0;i<5;i++)
	{
		if (n==arr[i])
			printf("Element found at %d index", i);
	}
}
