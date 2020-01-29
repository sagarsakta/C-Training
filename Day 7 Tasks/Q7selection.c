#include<stdio.h>
int main()
{
	int s[8],i,j,temp,n;
	printf("Enter the total terms");
	scanf("%d", &n);
	for(i=0;i<8;i++)
	{
		scanf("%d", &s[i]);
	}
	for(i=0;i<8;i++)
	{
	for(j=i+1;j<8;j++)
	{
	if(s[i]>s[j])
	{
	temp= s[i];
	s[i]=s[j];
	s[j]=temp;
	}
	}
	}	
	for(i=0;i<8;i++)
	{
	printf("%d",s[i]);
	}
	return 0;
	}


