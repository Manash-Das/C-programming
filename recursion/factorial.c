#include<stdio.h>
int sum(int a,int b);
main()
{
	int a=4,b=5;
	a=sum(a,b);
	
	printf("%d",a);
	
}
int sum(int a,int b)
{
	a=a+b;
	if(a<14)
	{
		a=sum(a,b);
	}
	return a;
}
