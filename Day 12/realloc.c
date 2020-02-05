#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	int i=0,rem,a=1;
	printf("enter any no");
	scanf("%d", &n);
	int *ptr = (int*) malloc(4);
	while(n!=0)
	{
		rem=n%10;
		n/=10;
		ptr[i++]= rem;
	
	 ptr= (int*) realloc(ptr, a+1);
	a++;
	}
	for(i=0;i<a;i++)
	{
	printf("%d",ptr[i]);
	}
	return 0;
}
