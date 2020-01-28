#include<stdio.h>
int main()
{
	char s[100],i;
	printf("Enter elements");
	for(i=0;i<10;i++)
	{
	scanf("%c", &s[i]);
	}
	char max=s[0];
	for(i=1;i<10;i++)
	{
		if(max<s[i])
			
		{
			max=s[i];
		}
	}
	printf("maximum element is %c\n",max);

	char min=s[0];
	for(int i=1;i<10;i++)
	{
		if(min>s[i])
		{
			min=s[i];
		}
	}
	printf("minimnum element is  %c" ,min);
	return 0;
}


