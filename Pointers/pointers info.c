#include <stdio.h>
main()
{
	int *p;
	int a = 10;
	p=&a;
	printf("Value of variable a is: %d", a);
	printf("\nValue of variable a is: %d", *p);
	printf("\nAddress of variable a is: %p", &a);
	printf("\nAddress of variable a is: %p", p);
	printf("\nAddress of pointer p is: %p", &p);
}
