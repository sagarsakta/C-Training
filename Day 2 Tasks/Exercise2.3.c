#include<stdio.h>
int main()
{
	unsigned char x1[2]="5B";
	unsigned int x2=0;
	x2=hextoint(x1);
	printf("%d",x2);
	return 0;
}
unsigned int hextoint(unsigned char hex[])
{
	unsigned int x=0;
	x=(getNum(hex[0])) *16 +(getNum(hex[1]));
}	
