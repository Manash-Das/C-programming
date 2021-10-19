#include<stdio.h>
int main()
{
	int i,j,k,(*p)[3][3];
	int a[3][3][3]={
		{{1,2,3},{4,5,6},{7,8,9}},
		{{7,8,9},{1,2,3},{4,5,6}},
		{{1,2,3},{7,8,9},{4,5,6}},
	};
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
				printf("%d",a[i][j][k]);
		printf("  ");
		}
		printf("\n");
	};
		p=a;
	for(i=0;i<27;i++)
	{
		scanf("%d\n",&*(p+i));
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
				printf("%d",a[i][j][k]);
		printf("  ");
		}
		printf("\n");
	}
}
