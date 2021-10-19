#include<stdio.h>
main()
{
	int m,i,j,sum=0;
	printf("Enter number of rows :");
	scanf("%d",&m);
	int a[m][m];
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("Enter (%d,%d) element in the matrix :",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<m;i++)
	{
		sum=a[i][i]+sum;
	}
	printf("\n\nTrace of the matrix is :%d",sum);
	
	
}
