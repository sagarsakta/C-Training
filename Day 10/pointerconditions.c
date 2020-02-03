#include<stdio.h>
int main()
{
	int i=20,k=33;
	i=i+1;
	int  *ptr =&i;
	printf("%d\n", i);
	printf("%d\n",i++);
	printf("%p\n",ptr++);
	ptr=&k;
	printf("%d\n", *ptr);
	return 0;
}
