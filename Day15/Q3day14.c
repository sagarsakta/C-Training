#include<stdio.h>
int main()
{
	int i,j;
	
	struct demo
	{
        int arr[10];
	};
       struct demo obj[2];
       for(i=0;i<2;i++)
       {
	for(j=i;j<10;j++)
	{
	scanf("%d", &obj[i].arr[j]);
       }
       }
       for(i=0;i<2;i++)
       {
       for(j=i;j<10;j++)
        {
	 if(obj[i].arr[j]%2==0)

        printf("%d", obj[i].arr[j]);
       }
       }
       return 0;
}
       
