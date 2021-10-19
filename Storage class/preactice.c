#include<stdio.h>
int *greater(int* ,int* ,int* ,int* );
main()
{
	int a,b,c,d,*G;
	printf("Enter 1st number :");
	scanf("%d",&a);
	printf("Enter 2nd number :");
	scanf("%d",&b);
	printf("Enter 3rd number :");
	scanf("%d",&c);
	printf("Enter 4th number :");
	scanf("%d",&d);
	G=greater(&a,&b,&c,&d);
	printf("Greater number is :%d",*G);
	
}
int *greater(int *a,int *b,int *c,int *d)
{
	if(*a>*b && *a>*c && *a>*d)
		return a;
	else if(*b>*a && *b>*c && *b>*d)
		return b;
	else if(*c>*a && *c>*b && *c>*d)
		return c;
	else
		return d;

}
