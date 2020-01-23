#include<stdio.h>
int perfect();
int main() 
{
	int a,sum=0;
	printf("Enter a number");
         scanf("%d",&a);

	sum = perfect(a);
	if(sum==a)
		printf("Number is perfect no%d",a);
	else
		printf("Number is not perfect no%d",a);
          return 0;
}

int perfect(int num)
{
int i,sum=0;
for(i=1;i<num;i++)
{
	if(num%i==0)
		sum=sum+i;
}
         return sum;
}

