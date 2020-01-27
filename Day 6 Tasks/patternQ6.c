#include<stdio.h>
int main()
{
        int i,j,k,n,l=7,s=0;
                printf("enter no of rows");
         scanf("%d", &n);
        for(i=1;i<=n;i++)
        {
                for(k=0;k<=s;k++)
                {
                        printf(" ");
                }
                for(j=1;j<=l;j++)
                {

                if(i%2!=0)
                {
                        printf("* ");
                 

                }
                else
                {
                        printf("$ ");
                   

                }

                
                }
		l=l-2;
		s+=2;
                printf("\n");
        }
        return 0;

}

