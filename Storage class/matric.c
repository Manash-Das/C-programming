#include<stdio.h>
int *greater(int row,int column,(*A)[column]);
main()
{
	int row,column,i,j;
	printf("Enter number of row :");
	scanf("%d",&row);
	printf("Enter number of column :");
	scanf("%d",&column);
	int A[row][column],B[row][column];
	printf("matrix\n");
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=column;j++)
		{
			printf("\t");
			printf("Enter (%d,%d) elements of 1st matrix :",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	greater(row,column,A);
}
int *greater(int row,int column,(int A)*(column));
{
	int i,j,c=A[1][1];
	printf("Greater among the elements in matrix :");
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=column;j++)
		{
			if(A[i][j]>=c)
				c=A[i][j];
		}
	}
		printf("%d",c);
}



