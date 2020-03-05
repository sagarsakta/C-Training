#include<stdio.h>
int main()
{
	int a[5];
	int *p= a[3];
	int c= p+2;
	printf("%d",c);
	return 0;
}

