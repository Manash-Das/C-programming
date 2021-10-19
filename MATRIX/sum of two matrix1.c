#include<stdio.h>
int sum(int row,int column,int A[row][column],int B[row][column]);
main()
{
	int row,column,i,j;
	printf("Enter number of row :");
	scanf("%d",&row);
	printf("Enter number of column :");
	scanf("%d",&column);
	int A[row][column],B[row][column];
	printf("1st matrix\n");
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=column;j++)
		{
			printf("\t");
			printf("Enter (%d,%d) elements of 1st matrix :",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	printf("Enter 2nd matrix\n");
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=column;j++)
		{
			printf("\t");
			printf("Enter (%d,%d) elements of 2nd matrix :",i,j);
			scanf("%d",&B[i][j]);
		}
	}
	sum(row,column,A,B);
}
int sum(int row,int column,int A[row][column],int B[row][column])
{
	int i,j;
	printf("sum of 1st matrix and 2nd matrix\n");
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=column;j++)
		{
			printf("\t");
			printf("%4d",A[i][j]+B[i][j]);
		}
		printf("\n");
	}
}



