#include<stdio.h>
int main()
{
	int s1[7],i,low=0,mid,high=6,n;
	printf("Enter the array elements");
	for(i=0;i<7;i++)
	{
		scanf("%d", &s1[i]);
	}
	printf("enter your searching element");
	scanf("%d", &n);
	   
      	while(low<=high)
	{	
		mid=(low+high)/2;
	  
	  if(n>s1[mid])
	  {
		  low=mid+1;
	  }
	  else if(n<s1[mid])
	  {
		  high=mid-1;
	  }
	  else
	  {
		  printf("Your element is at %i",mid);
		  break;
	  }
	}
	return 0;
}	
