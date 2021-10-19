#include<stdio.h>
main()
{
	int i;
	static int a[]={54,1,2,3,4};
	int *p[]={a,a+1,a+2,a+3,a+4};
	printf("%d",p[0]);printf("\n");
	printf("%d",p[1]);printf("\n");
	printf("%d",p[2]);printf("\n");
	printf("%d",p[3]);printf("\n");
	printf("%d",p[4]);printf("\n");
	for(i=0;i<4;i++)
	{printf("\n");
		printf("%u,%u,%d",p+i,*p+i,*(*(p+i)));
	}
	for(i=0;i<4;i++)
	{printf("\n");
		printf("%u,%u,%d",a+i,*a+i,*(*(p+i)));
	}
}
