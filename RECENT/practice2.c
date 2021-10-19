#include<stdio.h>
main()
{
	register int a=12;
	{
		int a=13;
		{
			int a=14;
			printf("%d",a);
		}
			printf("%d",a);
	}
			printf("%d",a);
}
