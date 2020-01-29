#include<stdio.h>
int binary(int[],int);
int main()
{
	int s[7];
        printf("Enter array elements");
	for(i=0;i<7;i++)
	{
	scanf("%d", s);
	}
	printf("Search element");
	scanf("%d",&n);

	binary(s,n);
	
	return 0;
}
    int binary(int s[],int n)
{
  int low=0,mid,high=6;
   if(n>s[mid])
  {
	  low=mid+1;
  }
   else if(n<s[mid])
   {
	   high=mid-1;
   }
   else
   {
	   printf("print middle element %i",mid);
   }
     binary(int s[7],++n);

	
