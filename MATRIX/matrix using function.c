#include<stdio.h>
void matrix(int row,int column,int matrix[row][column]);
main()
{	
	int row,column,i,j;
	printf("Enter no of row :");
	scanf("%d",&row);
	printf("Enter no of column :");
	scanf("%d",&column);
	int a[row][column];
	for (i=1;i<=row;i++) 
	{
		for (j=1;j<=column;j++)
		{
			printf("Enter (%d,%d) elements of the matrix :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Your matrix is :\n");
	for (i=1;i<=row;i++)
	{
		for(j=1;j<=column;j++)
		{printf("%4d",a[i][j]);}
		printf("\n");
	}
	matrix (row,column,a);
}
void matrix(int row,int column,int matrix[row][column])
{
	int i,j;
	printf("Diagonal elements in matrix format:\n");
	for (i=1;i<=row;i++){
		for(j=1;j<=column;j++){
			if(i==j || i+j==row+1)
			printf("%4d",matrix[i][j]);
			else{
				printf("    ");}}
			printf("\n");}
	printf("Left to right diagonal elements are :\n");
	for (i=1;i<=row;i++)
	{
		for(j=1;j<=column;j++)
		{if(i==j)
			printf("%4d\n",matrix[i][j]);
		}
	}
	printf("Right to left diagonal elements are :\n");
	for (i=1;i<=row;i++)
	{
		for(j=1;j<=column;j++)
		{
			if(i+j==row+1)
			printf("%4d\n",matrix[i][j]);
			
		}
	}
}

