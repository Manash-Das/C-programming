#include<stdio.h>
main()
{
	int i,j,k,n;
	printf("Enter no. of rows :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==0||j==0||j==n-1||i==n-1||i==j||i+j==n-1)
			{
				printf("* ");
				
			}
			else
				printf("  ");
		}
		printf("\n");
	}
}
