#include<stdio.h>
#include<stdlib.h>
int main()
{
	char * ptr = (char *) malloc(20);
	int i=0,j,min,max, a=1;

        int count=0;
	for(int j=0;j<=t;j++)
	{
		count++;
		if(str[j]==' ')
		{
			count--;
			if(min>count)
				min=count;
			if(max<count)
				max=count;
			count=0;
		}
	}
