#include <stdio.h>
#include <wchar.h>
int main(void)
{
     FILE* fp = fopen("mkdir.c","r");
     fwide(fp, 1);
}
