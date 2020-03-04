#include <sys/stat.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
int main(void)
{
 mkdir( "new dir", S_IRUSR);
 exit(0);
}
