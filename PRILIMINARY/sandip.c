#include<stdio.h>
main()
{
	int a[5];
	int i,b,c=1;

	for(i=0;i<5;i++)
	{
		printf("Enter number=");
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		c=a[i]*c;
	}
	printf("Multiplication of all number is =%d",c);
	
}
