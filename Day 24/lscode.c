#include<dirent.h>
#include<stdio.h>

int main(int argc, char *argv[])
{
    DIR *dp;
    struct dirent *dirp;

    if(argc!=2)
    {
	    dp=opendir(".");
    }
    else
    {
    if((dp=opendir(argv[1]))==NULL)
	    printf("it can't open the file %s", argv[1]);
    }
    while((dirp=readdir(dp)) !=NULL)
            printf("%s\n", dirp->d_name);
    closedir(dp);
    

	return 0;
}
