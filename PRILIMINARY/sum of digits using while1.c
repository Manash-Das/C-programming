#include<stdio.h>
main()
{
	int a,b;
	printf("Enter not more than 5 digit number :");
	scanf("%d",&a);
	int i=10000,count=0;
	while(i<=10000)
	{
		b=a/i;
		printf("%d",b);
		
		
		count=count+b;
		a=a%i;
		if(a==0) 
		{
			break;
		}
		i=i/10;
	}
	printf("\n%d",count);
}
