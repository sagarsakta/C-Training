#include<stdio.h>
#include<math.h>
void convertor();
int main()
{
	int a;
printf("Enter the decimal no");
scanf("%d",&a);
 convertor(a);
return 0;
}
void convertor(int a)
{
	int i=0,rem,s=0;
	    while(a!=0)
	    {
		    rem=a%2;
		    s=s+a%2 *pow(10,i++);
			    a=a/2;
	    }
	printf("%d",s);
}



