#include<stdio.h>
main()
{
	int a[4][2]=
	{
		{12,56},
		{12,33},
		{34,80},
		{12,78},
	};
	int *p,i,j;
	for(i=0;i<4;i++)
	{
		p = &a[i];
		for(j=0;j<2;j++)
		{
			
			printf("(%d,%d)",*p,p);
			p++;
		}
		
		printf("\n");
	}
}
