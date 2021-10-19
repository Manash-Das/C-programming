#include<stdio.h>
main()
{
	int i,j,k,n,spaces;
	printf("Enter number of rows :");
	scanf("%d",&n);
	if(n%2!=0)
	{
		n=n+1;
	}
	for(i=0;i<n;i++)
	{
		for(spaces=0;spaces<=n-i;spaces++)
		{
			printf(" ");
		}
		for(j=0;j<n/2;j++)
		{
			if(i==0||j==0||i==j)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
