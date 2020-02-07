#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("no. of strings");
	int row;
	int col;
        scanf("%d",&row);
	printf("enter sizes");
	scanf(" %d", &col);
        char **ptr = (char**) calloc(row,sizeof(char*));
	for(int i=0;i<row;i++)
	{
		ptr[i]= (char*) calloc(col, sizeof(char));;
	}
	printf("enter any string");
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			scanf("%c",&ptr[i][j]);
		}
		ptr[i][col]='\0';
	}

	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf("%c", ptr[i][j]);
		}
	} 
	return 0;
}


