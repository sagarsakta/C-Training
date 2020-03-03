#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
int main( void)
{
 symlink("break.c", "break1.c");
exit(0);
}
