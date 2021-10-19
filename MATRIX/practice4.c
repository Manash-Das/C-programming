#include<stdio.h>
int input(int *p);
main()
{
	int a[2][2]={1,2,3,4};
	input(a);
}
int input(int *p)
{
	printf("%d,%d",*p,p);
	return 0;
}
