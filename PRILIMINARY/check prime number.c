#include<stdio.h>
main()
{
	int i,a,b,c=0;
	scanf("%d",&a);
	for(i=2;i<=a/2;i++)
	{
		if(a%i==0)
		{
			c=1;
			break;
		}			
	}
	if(c==1)
	{
		printf("Non prime number");
	}	
	else{
		printf("Prime number");
	}
	
}
