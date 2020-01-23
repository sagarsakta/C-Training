#include<stdio.h>
int fib();
int main()
{
	int n;
	printf("Enter nth term");
	scanf("%d",&n);
	fib(n);
	return 0;
}
       int fib(int n)
{
	int i,t1=0,t2=1,t3;
        for(i=1;i<=n;i++)
{
	t3=t1+t2;
	t1=t2;
	t2=t3;
	printf("%d",t3);
}
  
}
   

