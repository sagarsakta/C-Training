#include<stdio.h>
void fibonacci(int,int,int);
int main()
{
	int a=0, b=1,n;
	printf("Enter the terms");
	scanf("%d", &n);
	fibonacci(a,b,n);
	return 0;
}
   void fibonacci(int a, int b,int  n)
{
	int c;
	if(n>0)
	{
	c=a+b;
	a=b;
	b=c;
	printf("%d", c);
	fibonacci(a,b,n-1);
	}
}





