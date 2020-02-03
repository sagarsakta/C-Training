#include<stdio.h>
int main()
{
       	const int i=11,*p;
	p=&i;
	   printf("%d\n",i);
	   printf("%p",p);
	   return 0;
}
