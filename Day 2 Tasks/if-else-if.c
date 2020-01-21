#include<stdio.h>
int main()
{
	int i;
	printf("Enter any number");
	scanf("%d",&i);
	if(i%2==0)
		printf("even");
	else if(i%3==0)
		printf("no divisble by 3");
	else
		printf("any other no");
	return 0;
}

