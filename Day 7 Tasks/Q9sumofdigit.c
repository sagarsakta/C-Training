#include<stdio.h>
int sum(int);

	int main()
	{
		int a;
		printf("Enter a no");
		scanf("%d",&a);
		int c=sum(a);
		printf("%d",c);
		return 0;
	}
	int sum(int a)
	{
	
	 if(a==0)
	 {
		 return 0;
	 }
	 else
	 {
		 return sum(a/10) + a%10;
	 }

	
	}
	
