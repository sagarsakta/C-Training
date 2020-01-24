#include<stdio.h>
void strreverse(char a[]);
int main()
{
	char a[100];
	printf("Enter string");
	scanf("%[^\n]*c", a);
	strreverse(a);
	return 0;
}
	void strreverse (char a[])
	{
		int i=0, n=0;
	       while(a[n]!='\0')
	       {
	        n ++;
	       }		
	
		for(i=n-1;i>=0;i--)
		{
			printf("%c",a[i]);
		}
	}
	
