#include<stdio.h>
#include<stdlib.h>
int main()
{
        int i=0,a=1,j;
         char *ptr = (char*) malloc(1);
        char b;
        printf("enter any string");
        scanf("%c", &b);

        while(b!=10)
        {
         ptr[i]=b;
      ptr= (char*) realloc (ptr,++a);
        scanf("%c", &b);
        i++;
        }
	int loc=a;
        for(i=a;i>=0;i--)
	{
	
			if(ptr[i]==' '||i==0)
			{
				if(i==0)
				{
					printf("%c",ptr[i]);
				}
				for(j=i+1;j<=loc;j++)
				{
	                   printf("%c",ptr[j]);
	      		   }
				loc=i;
				printf(" ");
		}
	}
        return 0;
}


