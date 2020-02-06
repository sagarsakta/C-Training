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
       for(i=0;i<a;i++)
     {
         if(ptr[i] == ' ' )
         {
             for(j=i;j<a;j++)
             {
                 ptr[j]=ptr[j+1];
             }
             a--;
             }
         
          
     }
     printf("%s", ptr);
        return 0;
}

