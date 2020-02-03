#include<stdio.h>
int sum(int, int);

int main()
{

 int a=20, b=10;

   int (*p) (int,int) =NULL;
    p=sum;
  int c = p(20,10);
   printf("%d",c);
  return 0;
}

 int sum(int a, int b)
{
	return a+b;
	   
}
