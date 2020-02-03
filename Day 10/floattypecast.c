#include<stdio.h>
int main()
{
         int i=10,*p;
	 float c= *(float *)p;
	 *p=&i;
	printf("%f",*p);
}
