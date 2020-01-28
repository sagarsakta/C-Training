#include<stdio.h>
void concat(char s1[100], char s2[100]);
int main()
{
	char s1[100]="Sagar", s2[100]="Sakta";
	concat(s1,s2);
	return 0;
}
 void concat(char s1[], char s2[])	
{
	int i=0;
	int j=0;
	while(s1[++i]!='\0');
	while(s2[j]!='\0')
	{
	  s1[i]=s2[j];
	  i++;
	  j++;
	}
	  printf("%s", s1);
}
	 
