#include<stdio.h>
#include<stdlib.h>
int main()
{
        int i=0,a=1;
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
        for(i=a;i>=0;i--)
	{
		printf("%c", ptr[i]);
	}
        return 0;
}


