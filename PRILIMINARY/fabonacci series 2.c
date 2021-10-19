#include<stdio.h>
main()
{
	int i,m;
	printf("Enter number of element :");
	scanf("%d",&m);
	int sum=1,a[m];
	a[0]=0;a[1]=1;
	for(i=0;i<m-1;i++)
	{
		a[i+2]=a[i]+a[i+1];
	}
	printf("Fabonacci series :\n");
	for(i=0;i<m;i++)
	{
		printf("%d",a[i+1]);
		if(i<m-1)
		{
			printf(",");
		}
	}
}
