#include<stdio.h>
#include<stdlib.h>
int main()
{
	int row,col,i,j;
	printf("enter rows and columns");
	scanf("%d%d",&row,&col);
        int **ptr=(int**) calloc(row,sizeof(int*));
	for(i=0;i<row;i++)
		{
		ptr[i]=(int*) malloc(col *sizeof(int));
		}
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{ 
				scanf("%d", &ptr[i][j]);
			}
		}
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{

		printf("%d ", ptr[i][j]);
			}
			printf("\n");
		}
		return 0;
	
}
