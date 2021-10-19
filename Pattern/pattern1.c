#include<stdio.h>
main()
{
	int a,i,j,k;
	printf("1\n");
	for(i=1;i<5;i++)
	{
		k=i;
		for(j=0;j<=i;j++)
		{
			printf("%d ",k);
			k++;
		}
		printf("\n");
	}
}
