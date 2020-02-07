#include<stdio.h>
#include<stdlib.h>
int main()
{
         int i=0,j,k;
	char * ptr= (char*) malloc(18);
	char a;
	printf("enter a character");
	scanf("%s", ptr);
	
	for(i=0; ptr[i]!= '\0'; i++)
	{
		for(j=i+1;ptr[j]!='\0';j++)
		{
			if(ptr[j]==ptr[i])
			{
				for(k=j; ptr[k]!='\0';k++)
				{
					ptr[k] =ptr[k+1];
				}
			}
		}
	}

	printf("%s", ptr);				

	return 0;
}


