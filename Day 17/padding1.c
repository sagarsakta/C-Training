#include<stdio.h>

        struct demo {
                int i;
                float f;
                char ch;
        };
        struct demo obj1;

int main()
{
	printf("%ld",sizeof(obj1));
	return 0;
}
