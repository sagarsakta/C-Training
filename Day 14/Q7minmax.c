#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main()
{
        int a=1;
        int i=0;
	int j=0;
	

        char *str=(char *)malloc(1);
        char s;
        printf("Enter you string\n");
        scanf("%c",&s);
	int b;
	b=s;
       
        while(b!=10)
        {
                str=(char*)realloc(str,a+1);
                a++;
                str[i++]=s;
                scanf("%c",&s);
                b=s;
        }
        a--;
	int min=INT_MAX;
	int max=INT_MIN;
	int count=0;
	for( j=0;j<=a;j++)
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
	printf("Max length:%i",max);
	printf("Min length:%i",min);
	return 0;
}
