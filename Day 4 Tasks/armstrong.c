#include<stdio.h>
int armstrong();
int main()
{
	int sum,temp;
         armstrong();
	return 0;
}

int armstrong()
{
	int r,n,i, temp,sum=0;
	for(i=1;i<=1000;i++)
	{
		int n=i;
		sum=0;
       
        while(n!=0)
	{
       
	r=n%10;
	sum=sum+(r*r*r);
	n=n/10;
	}
         if(i==sum)
        printf("%i is armstrong\n",i);
   }


}





