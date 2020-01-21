#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a number");
	scanf("%d",&a);
	scanf("%d",&b);
	switch(a)
	{
		case 1: 
			printf("Sagar");
			break;
	        case 2:
			switch(b)
			{
				case 11:
					printf("MSys Technologies");
					break;

				case 12:
					printf("Project Tintri");
                    			break;
			}
			break;
			return 0;
	
	}
}
