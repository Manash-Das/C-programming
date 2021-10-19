#include<stdio.h>
main()
{
	int i,j,k,n;
	printf("No of rows :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%2d",j);
		}
		for(k=i-1;k>0;k--)
			printf("%2d",k);
		printf("\n");
	}
	printf("Alphabets\n");
	for(i=97;i<n+97;i++)
	{
		for(j=97;j<=i;j++)
		{
			printf("%2c",j);
		}
		for(k=i-1;k>96;k--)
			printf("%2c",k);
		printf("\n");
	}
}
