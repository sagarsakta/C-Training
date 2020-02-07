#include<stdio.h>
#include<stdlib.h>
int main()
{
        int i=0,a=1,count=0;
	char b;
        char *ptr = (char*) malloc(12);
        printf("enter any string");
        scanf("%c", &b);
	char c;
        while(b!=10)
        {
         ptr[i]=b;
      ptr= (char*) realloc (ptr,++a);
        scanf("%c", &b);
        i++;
        }
	scanf("%c",&c);
       for(i=0;i<a;i++)
    {
      if(ptr[i]== c)
      {
          count++;
      }
    }
      printf("%d",count);
    
  
   	
        return 0;
}
