#include<stdio.h>
//register int x=2;//should not be declare globally
main()
{
register int x=2;//should be used locally 
	printf("%d",x);
}
