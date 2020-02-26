#include<fcntl.h>
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
int main(void)
{
	int fd;
if ((fd = open("hello.txt", O_WRONLY)) < 0) {
if (errno == ENOENT) {
if ((fd = creat("hello.txt", 765)) < 0)
printf("creat error");
} else {
printf("open error");
}

}
exit(0);
}

