#include<stdio.h>
main()
{
	int m,n;
	printf("Enter no. of element in 1st array :");
	scanf("%d",&m);
	printf("Enter no. of element in 1st array :");
	scanf("%d",&n);
	int a[m],b[m],c[m+n];
	printf("%d",m);
	printf("\n\nEnter %d element in the 1st array\n",m);
	int i;
	for(i=0;i<m;i++)
	{
		printf("Enter %d element :",i+1);
		scanf("%d",&a[i]);
	}
	printf("\n\nEnter %d element in the 2nd array\n",n);
	for(i=0;i<n;i++)
	{
		printf("Enter %d element :",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<m+n;i++)
		{
			if(i<m)
				c[i]=a[i];
			else
				c[i]=b[i-m];
		}
	printf("\n\nMerge of two array ");
	for(i=0;i<m+n;i++)
	{
		printf("%3d",c[i]);
	}
}
