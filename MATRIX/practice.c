#include<stdio.h>
main()
{
	int s[4][2]={
					{12,34},
					{13,35},
					{14,36},
					{15,37},
				};
					
	int(*p)[2];
	int i,j,*pint;
	for(i=0;i<=3;i++)
	{
		p=&s[i];
		pint=*p;
		printf("%d",pint);
		printf("\n");
		for(j=0;j<=1;j++)
		{
			printf("%d",*(pint+j));
		}
		printf("\n");
	}
	return 0;
}
