#include<stdio.h>
int main()
{
	int a[5]={10,11,12,13,14};
	a[5]= *(a+4);
	printf("%d",a[5]);
	return 0;
}
