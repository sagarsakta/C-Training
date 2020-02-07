#include<stdio.h>
#include<stdlib.h>
int main()
{
	char * ptr = (char*) malloc(10);
	int i,j,n=0;
	char c;
	printf("enter the string");
	scanf("%s", ptr);
	printf("Enter the index no");
	scanf(" %d", &j);
	printf("Enter the character");
	scanf(" %c",&c);
        for( i=0; ptr[i]!='\0';i++)
	{
		n++;
	}

		for(i=n;i>=j;i--)
		{
			ptr[i]=ptr[i-1];
		}
		ptr[j]= c;
		ptr[n+1] = '\0';
	
	printf("%s", ptr);
	return 0;
}

