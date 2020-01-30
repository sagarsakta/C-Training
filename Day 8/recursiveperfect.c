#include<stdio.h>
int perfect(int,int,int);
int main()
{
        int n,i=1,sum=0;
        printf("Enter one number");
        scanf("%d", &n);
        int c=perfect(n,sum,i);
	if(n==c)
	{
		printf("%d is perfect",n);
	}
	else
	{
		printf("%d is not perfect", n);
	}
        return 0;
}
int perfect(int n,int sum,int i)
{
       
         if(i>=n)
		return sum;
	 if(n%i==0)
	 {

		 return  perfect(n,sum+i,i+1);
	 }
	 else
	 {
		 return perfect(n,sum,i+1);
	 }
}

