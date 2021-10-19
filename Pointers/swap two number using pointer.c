#include<stdio.h>
main()
{
	int a,b,*p,*q,r;
	printf("Enter 1st number :");
	scanf("%d",&a);
	printf("Enter 2nd number :");
	scanf("%d",&b);
	p=&a;
	q=&b;
	printf("Before swaping\n");
	printf("\tYour first number is :%d\n",*p);
	printf("\tYour second number is :%d\n",*q);
	printf("After swaping\n");
	r=*p;
	*p=*q;
	*q=r;
	printf("\tYour first number is :%d\n",*p);
	printf("\tYour second number is :%d\n",*q);
}

