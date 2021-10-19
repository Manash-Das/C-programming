#include<stdio.h>
main()
{
	int *p,*q;
	int a,b;
	printf("Enter 1st number :");
	scanf("%d",&a);
	printf("Enter 2nd number :");
	scanf("%d",&b);
	p=&a;
	q=&b;
	*q=*q+10;
	printf("\nSum of two number is :%d",*p+*q);
}
