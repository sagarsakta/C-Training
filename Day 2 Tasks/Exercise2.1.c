#include<limits.h>
#include<float.h>
#include<stdio.h>
int main()
{
	printf("%hi\n",sizeof(unsigned short));
	printf("%hi\n",sizeof(signed short));
	printf("%ld\n",sizeof(unsigned long));
	printf("%ld\n",sizeof(signed long));
	printf("%c\n",sizeof(unsigned char));
	printf("%d\n",sizeof(signed char));
	printf("%ui\n",sizeof(unsigned int));
	printf("%i\n",sizeof(signed int));
	printf("%f\n",sizeof( float));
	printf("%lf\n",sizeof( double));
	return 0;
}
