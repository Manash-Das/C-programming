#include<stdio.h>
main()
{
	int i,j,k=1,n;
	printf("Enter a number :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;++j,k++)
		{
			
			printf("%3d",k);
		}
		printf("\n");
	}
}
