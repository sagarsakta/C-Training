#include<stdio.h>
int main()
{
	int arr[5];
	void *ptr1=arr;
	void *ptr= &arr[3];
	int c=(int*)ptr1 +1;
	printf("%d",c);
	return 0;
}
