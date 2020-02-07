#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j;
	char *ptr= (char*) malloc(20);
	printf("Enter the string ");
        scanf("%[^\n]*s",ptr);
	for(i=0;ptr[i]!='\0'; i++)
	{
	if(ptr[i]==' ')
	{
		for(j=i;j>=0;j--)
		{
			
			printf("%c",ptr[j]);
		}
	}
	}
	return 0;

}
