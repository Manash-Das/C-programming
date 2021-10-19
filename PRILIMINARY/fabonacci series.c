#include<stdio.h>
main()
{
	int i,a,b,c,d;
	a=0,b=1;
	scanf("%d",&d);
	printf("%d,%d",a,b);
	for(i=0;i<d;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf(",%d",c);
		
	}
}
