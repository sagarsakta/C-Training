#include<stdio.h>
int character(char s[100],int i, int count);
int main()
{
	char s[100];
	int count=0,i=0;
	printf("Enter the string");
	scanf("%[^\n]*c", s);
	int s1=character(s,i,count);
	printf("%d",s1);
	return 0;
}
 int character(char s[],int i,int count)
{
   if(s[i]!='\0')
   {  
	   i=i+1;
	  character(s,i,++count);
   }
   else
   {
   return count++;
   }
}
