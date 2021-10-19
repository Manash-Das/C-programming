#include<stdio.h>
main()
{
	int i,a,b,c;
	printf("Find prime factors of a number\n");
	printf("Enter number :");
	scanf("%d",&a);
	c=a;
	printf("All the factors are : 1");
	for(i=2;i<=c/2;i++)
	{
		b=a%i;
		if(b==0)
		{
			printf(",%d",i);		
		}
			
	}
}
