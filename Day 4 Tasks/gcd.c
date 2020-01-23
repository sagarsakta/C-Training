#include<stdio.h>
int gcd();
int main()
{
	int a,b;
	printf("Enter two numbers");
	scanf("%d%d",&a,&b);
	int c=gcd(a,b);
        printf("%d",c);
	return 0;
}

int gcd(int a, int b)
{
	int i,gcd;
for(i=1;i<=a && i<=b;i++)
{
	if(a%i==0 && b%i==0)
		gcd=i;
	
}
 return gcd;
}

