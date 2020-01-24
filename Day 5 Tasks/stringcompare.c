#include<stdio.h>
int stringcomp(char s1[], char s2[]);
int main()
{
	 char s1[100], s2[100];
	 printf("Enter two strings");
	 scanf("%[^\n]*c", s1);
	 scanf(" %[^\n]*c", s2);
	int p= stringcomp(s1,s2);
	printf("%d", p);
	return 0;
}
int stringcomp(char s1[], char s2[])
{
	int i=0;
 if(s1[i]<= s2[i])
	 for(i=0;i<=s1[i];i++)
	 {
		if(s1[i]>s2[i])
		return s1[i]-s2[i];
		else
		  s2[i]-s1[i];
         }


	 else
	 for(i=0;i<s2[i];i++)
	 {
	 if(s2[i]>s1[i])
	  return s2[i]-s1[i];
	  else
	   s1[i]-s2[i];
	   }
	  
 }


