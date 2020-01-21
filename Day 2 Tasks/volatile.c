#include<stdio.h>
int main()
{
	volatile int i=10;
       printf("%d ", ++i);
       printf("%d\n",i);
       return 0;
}
