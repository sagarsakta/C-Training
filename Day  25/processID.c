#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(void)
{
	pid_t n;
	
printf("hello world from process ID %ld\n", (long)getpid());
exit(0);
}
