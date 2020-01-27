#include<stdio.h>
void stringcopy(char s1[100]);
int main()
{
	char s1[100];
	printf("Enter any  string");
	scanf("%[^\n]*c",s1);
        stringcopy(s1);
	return 0;
}
 void stringcopy(char s1[100])
{
	char s2[100];int i=0;
	while(s1[i]!='\0')
	{
	       	s2[i]=s1[i];
	}
	s2[i]= '\0';
   printf("Second String= %s",s2[i]);
}

