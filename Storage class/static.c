#include<stdio.h>
//static int x=2;//should not be declare globally
int x()
{
	static int x=3;//should be used locally 
	printf("FUCK\n");
}
main()
{
	x();
	printf("%d",x);
}

