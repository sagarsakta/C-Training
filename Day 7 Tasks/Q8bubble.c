#include<stdio.h>
int main()
{
        int s[8],i,j,temp,n;
        printf("Enter the total terms");
        scanf("%d", &n);
        for(i=0;i<8;i++)
        {
                scanf("%d", &s[i]);
        }
        for(i=n-2;i>=0;i--)
        {
        for(j=0;j<=i;j++)
        {
        if(s[j]>s[j+1])
        {
        temp= s[j];
        s[j]=s[j+1];
        s[j+1]=temp;
        }
        }
        }
        for(i=0;i<8;i++)
        {
        printf("%d",s[i]);
        }
        return 0;
        }



