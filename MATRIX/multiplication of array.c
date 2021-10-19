#include<stdio.h>
main()
{
	int d;
	printf("Enter no of number you want to multiply : ");
	scanf("%d",&d);
	int a[d],i,b,c=1;
	for(i=0;i<d;i++)
	{
		b=i+1;
		printf("Enter %d number=",b);
		scanf("%d",&a[i]);
	}
	for(i=0;i<d;i++)
	{
		c=a[i]*c;
	}
	printf("Multiplication of all number is =%d",c);
	
}
