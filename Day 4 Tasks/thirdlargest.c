#include<stdio.h>
void thirdlargest();
int main()
{
	int a;
	printf("enter a no");
	scanf("%d", &a);
	thirdlargest(a);
	return 0;
}
 void thirdlargest(int a)
{
	int rem,count=0;
	int arr[10]={0,0,0,0,0,0,0,0,0,0};
	while(a!=0)
	{
		rem=a%10;
		arr[rem]++;
		a=a/10;
	}
        for(int i=9;i>=0;i--)
	{
		if(arr[i]!=0)
		{
			count++;
		}
		if(count==3)
		{
			printf("%d is third largest no", i);
			break;
		}
	}

}


