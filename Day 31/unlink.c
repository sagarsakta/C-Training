#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include <fcntl.h>
int main(void)
{
    if (open("malloc.c", O_RDWR) < 0)
    printf("open error\n");
    if (unlink("malloc.c") < 0)
    printf("unlink error\n");
    printf("file unlinked\n");
    sleep(15);
    printf("done\n");
    exit(0);
}
