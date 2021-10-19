#include<stdio.h>
int array(int m,int a[m]);
int Merge(int m,int n,int a[m],int b[n],int c[m+n]);
int print(int m,int n,int c[m+n]);
main()
{
	int m,n;
	printf("Enter no. of element in 1st array :");
	scanf("%d",&m);
	printf("Enter no. of element in 1st array :");
	scanf("%d",&n);
	int a[m],b[m],c[m+n];
	printf("\n\nEnter m element in the 1st array\n");
	array(m,a);
	printf("\n\nEnter m element in the 2nd array\n");
	array(n,b);
	Merge(m,n,a,b,c);
	printf("\n\nMerge of two array ");
	print(m,n,c);
}


int array(int m,int a[m])
{
	int i;
	for(i=0;i<m;i++)
	{
		printf("Enter %d element :",i+1);
		scanf("%d",&a[i]);
	}
}

int Merge(int m,int n,int a[m],int b[n],int c[m+n])
{
	int i;
	for(i=0;i<m+n;i++)
	{
		if(i<m)
			c[i]=a[i];
		else
			c[i]=b[i-m];
	}
}
int print(int m,int n,int c[m+n])
{
	int i;
	for(i=0;i<m+n;i++)
	{
		printf("%3d",c[i]);
	}
}
