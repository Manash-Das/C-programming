#include<stdio.h>
void display (int (*q)[4],int ,int);
void show (int (*q)[4],int ,int);
void print (int q[][4],int ,int);
int main()
{
	int a[3][4]={
					1,2,3,4,
					5,6,7,8,
					9,10,11,12
				};
	printf("WAYS OF TAKING INPUT\n");
	display(a,3,4);
	int i,j,row=3,col=4;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			printf("%d",a[i][j]);
		printf("\n");
	}
	printf("\n");
	show(a,3,4);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			printf("%d",a[i][j]);
		printf("\n");
	}
	printf("\n");
	print(a,3,4);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			printf("%d",a[i][j]);
		printf("\n");
	}
	printf("\n");
	
	return 0;
}
void display(int (*q)[4],int row,int col)
{
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			scanf("%3d",&*(*(q+i)+j));
//		printf("\n");
	}
	printf("\n");
}
void show (int (*q)[4],int row,int col)
{
	int i,j;
	int *p;
	for(i=0;i<row;i++)
	{
		p=q[i];
		for(j=0;j<col;j++)
			scanf("%3d",&*(p+j));
//		printf("\n");
	}
	printf("\n");
}
void print(int q[][4],int row,int col)
{
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			scanf("%d",&q[i][j]);
//		printf("\n");
	}
	printf("\n");

}

