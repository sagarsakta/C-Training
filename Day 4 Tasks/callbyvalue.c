#include<stdio.h>
int main()
{
    int z=110;
    printf("before calling z=%d",z);
     changevalue(z);
    printf("value at last %d",z);
    return 0;
}
        changevalue(int a)
{
	a=a+10;
	printf("value after calling is %d",a);
	
}
	

