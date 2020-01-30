#include<stdio.h>
int palprime(int);
int main()
{
	int n;
	printf("enter the no");
	scanf("%d", &n);
	int c= palprime(n);
	if(c==n)
	{
		printf("number is palprime");
	}
	else
	{
		printf("number is not palprime");
	}
	return 0;
}
         int palprime(int n)
{
	int i,rem,rev=0,flag=0;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			flag=1;
		}
	}
		 if(flag==0)
		{
			int temp=n;

			while(n!=0)
			{
			rem=n%10;
			rev= (rev*10)+rem;
			n=n/10;
			}
		}
		return rev;
	
}
