
#include<stdio.h>
void lower(char *);

void main()
{
	char arr[100];
	char a;
	int i=0;
	scanf("%[^\n]s",arr);
	lower(arr);
	printf("%s",arr);
}
void lower(char *arr)
{
	for(int i=0;arr[i]!='\0';i++)
	{
		char c=arr[i];
		arr[i]=(arr[i]>='A'&&arr[i]<='Z')?c+32:c;
	}
}
 

