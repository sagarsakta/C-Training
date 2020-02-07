#include<stdio.h>
int main()
{
	struct demo {
		char ch;
		int i;
		float f;
		double d;
	};
	struct demo obj1;
	printf("Enter for 1st variable");
	scanf("%c", &obj1.ch);
	printf("enter for second variable");
	scanf("%d", &obj1.i);
	printf("enter for third variable");
	scanf("%f", &obj1.f);
	printf("enter for forth variable");
	scanf("%le", &obj1.d);
	printf("%c %d %f %le", obj1.ch, obj1.i, obj1.f, obj1.d);

         struct demo obj2;
        printf("Enter for 1st variable");
        scanf("%c", &obj2.ch);
        printf("enter for second variable");
        scanf("%d", &obj2.i);
        printf("enter for third variable");
        scanf("%f", &obj2.f);
        printf("enter for forth variable");
        scanf("%le", &obj2.d);
        printf("%c %d %f %le", obj2.ch, obj2.i, obj2.f, obj2.d);


	 struct demo obj3;
        printf("Enter for 1st variable");
        scanf("%c", &obj3.ch);
        printf("enter for second variable");
        scanf("%d", &obj3.i);
        printf("enter for third variable");
        scanf("%f", &obj3.f);
        printf("enter for forth variable");
        scanf("%le", &obj3.d);
        printf("%c %d %f %le", obj3.ch, obj3.i, obj3.f, obj3.d);

	 struct demo obj4;
        printf("Enter for 1st variable");
        scanf("%c", &obj4.ch);
        printf("enter for second variable");
        scanf("%d", &obj4.i);
        printf("enter for third variable");
        scanf("%f", &obj4.f);
        printf("enter for forth variable");
        scanf("%le", &obj4.d);
        printf("%c %d %f %le", obj4.ch, obj4.i, obj4.f, obj4.d);

	 struct demo obj5;
        printf("Enter for 1st variable");
        scanf("%c", &obj5.ch);
        printf("enter for second variable");
        scanf("%d", &obj5.i);
        printf("enter for third variable");
        scanf("%f", &obj5.f);
        printf("enter for forth variable");
        scanf("%le", &obj5.d);
        printf("%c %d %f %le", obj5.ch, obj5.i, obj5.f, obj5.d);


        return 0;
}
