#include<stdio.h>
int input(int m,int n,int *mat[0]);
int sum(int m,int n,int *mat_1[0],int *mat_2[0],int *mat[0]);
main()
{
	int m=3,n=2,i,j;
	int mat_1[m][n],mat_2[m][n],mat[m][n];
	printf("Input matrix 1\n");
	input(m,n,&mat_1[0]);
	printf("Input matrix 2\n");
	input(m,n,&mat_2[0]);
	printf("Sum of two matrix\n");
	sum(m,n,&mat_1[0],&mat_2[0],&mat[0]);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",mat[i][j]);
		}
		printf("\n");
	}
}

int input(int m,int n,int *mat[0])
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&*(*(mat+i)+j));
		}
	}
}
int sum(int m,int n,int *mat_1[0],int *mat_2[0],int *mat[0])
{	
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",*(*(mat+i)+j));
		}
	}
}	


