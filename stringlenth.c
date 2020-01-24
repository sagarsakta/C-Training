#include<stdio.h>
void strlength(char string[]);
int main()
{
	char string[100];
	printf("Enter any string");
	scanf("%[^\n]*c", string);
	strlength(string);
	return 0;
}

	void strlength(char string[])
	{
		int i=0,count=0;
		while(string[i++]!='\0')
		{
			count++;
		}
			printf("%d",count);
	}


