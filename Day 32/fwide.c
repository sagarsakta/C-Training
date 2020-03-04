#include <stdio.h>
#include <wchar.h>
int main(void)
{
     FILE* fp = fopen("main.c","r");
     fwide(fp, 1);
}
