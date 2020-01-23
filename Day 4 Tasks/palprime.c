#include<stdio.h>
void palprime();
int main()
{
	int n;
	printf("Enter any number");
	scanf("%d",&n);
	palprime(n);
	return 0;
}
void palprime(int n)
{
 int i,flag=1,r,rev=0,rem;
 for(i=2;i<n;i++)
 {
	 if(n%i==0)
	 {
		 flag=0;
	 }

 }
 if(flag==1)
 {
	int  temp=n;
	 while(n!=0)
	 {
         r=n%10;
	 rev+=r;
	 rev*=10;
	 n=n/10;
	 }
	 rev/=10;
	 if(temp==rev)
		 printf("No is palprime");
      
          else
		  printf("No is not palprime");

 }

 else
	 printf("no is not palprime");
}

	 
