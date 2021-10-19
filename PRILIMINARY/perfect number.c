#include<stdio.h>
main()
{
	int i,a,b,c,count=1;
	scanf("%d",&a);
	c=a;
	for(i=2;i<=c/2;i++)
	{
		b=a%i;
		if(b==0)
			count=count+i;		
	}
	printf("%d\n",count);
	if(count==a)
		printf("This is a perfect number");
	else
		printf("This is not a perfect number");
}
