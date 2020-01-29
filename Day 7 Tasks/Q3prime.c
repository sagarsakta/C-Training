#include<stdio.h>
void prime(int,int);
int main()
{
	int n,num=2;
	printf("Enter the range");
	scanf("%d",&n);
	prime( n,num);
	return 0;
}
   void prime(int n,int num)
{
	int i;
	if(n==num);
	else
		
	 {
          int flag=0;
	  for(i=2;i<num;i++)
	  {
             if(num%i==0)
        	{
			flag=1;
			 break;
		}
		}

	      
	        
		
	if(flag==0)
	
		printf(" %d is prime",num);
                 prime(n,++num);
	}
 }
	
        
 


