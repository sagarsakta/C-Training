#include<stdio.h>
int main()
{
	int a=10,b=20,c=30;
	int *pa=&a, *pb=&b, *pc=&c;
        int (*arr[3])={pa,pb,pc};	
	printf("%d",*arr[3]);
	return 0;
}
