#include<stdio.h>
int matrix(int m,int n,int a[m][n]);
int multiply(int a,int b,int m1[a][b],int m2[b][a],int m3[a][a]);
int display(int a,int m3[a][a]);
main()
{
	int i,j,a,b,c;
	printf("Enter number of rows :");
	scanf("%d",&a);
	printf("Enter number of column :");
	scanf("%d",&b);
	int m1[a][b],m2[b][a],m3[a][a];
	printf("\nEnter Elemets of 1st matrix :\n");
	matrix(a,b,m1);
	printf("\nEnter elemets of 2nd matrix :\n");
	matrix(b,a,m2);
	multiply(a,b,m1,m2,m3);
	printf("\nHere is the product of two matrix :\n");
	display(a,m3);
	
}
int matrix(int m,int n,int a[m][n])
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter [%d,%d] element :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	return;
}
int multiply(int a,int b,int m1[a][b],int m2[b][a],int m3[a][a])
{
	int i,j,k,sum=0;
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			for(k=0;k<a;k++)
			{
				sum=sum+m1[i][k]*m2[k][j];
			}
			m3[i][j]=sum;
			sum=0;
		}
	}
	return;
}
int display(int a,int m3[a][a])
{
	int i,j;
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			printf("%4d",m3[i][j]);
		}
		printf("\n");
	}
	return 0;
}
