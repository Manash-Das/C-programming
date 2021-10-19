#include<stdio.h>
main()
{
	int s[4][2]=
	{
		{1234,56},
		{1212,33},
		{1434,80},
		{1312,78},
	};
	int (*p)[2];
	int i,j,*pint;
	for(i=0;i<=3;i++)
	{
		p=&s[i];
		pint=(int*)p;
		for(j=0;j<=1;j++)
			printf("%d  ",*(pint+j));
		printf("\n");
	}
	for(i=0;i<=3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d  ",*(*(s+i)+j));
		}
		printf("\n");
	}
	return 0;
}
