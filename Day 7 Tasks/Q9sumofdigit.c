#include<stdio.h>
void sum(int);

	int main()
	{
		int a;
		printf("Enter a no");
		scanf("%d",&a);
		sum(a);
		return 0;
	}
	void sum(int a)
	{
		int rem,s=0;
	
		while(a!=0)
		{
		rem=a%10;
		s=s+rem;
		a=a/10;

		}
                printf("%d",s);
		
		
		}
	

	
