#include<stdio.h>
main()
{
	int i,j,k,n,space;
	
	printf("Butterfly pattern\n");
	printf("Enter number of rows :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		for(space=2*(n-i);space>0;space--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		for(space=2*(n-i);space>0;space--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
