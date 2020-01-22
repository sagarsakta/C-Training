#include<stdio.h>

	int main()
	{
		int a;
		printf("Enter the year");
		scanf("%d",&a);
		if((a%4==0) &&( a%100!=0)||(a%400==0))
			printf("%d is a leap number",a);
		else
		{
			printf("%d is not a leap number",a);

		}
		return 0;

	}

