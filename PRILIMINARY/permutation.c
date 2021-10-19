#include<stdio.h>
#include<stdlib.h>
int fact(int x);
main()
{
	int a,b,c;
	printf("Enter no. of elements :");
	scanf("%d",&a);
	printf("Enter no. of option ");
	scanf("%d",&b);
	if(a<b){
		printf("invalid");
		exit(0);
	}
	c=fact(a)/(fact(a-b));
	printf("No of ways =%d",c);
	
}
int fact(int x)
{
	int i,factorial=1;
	for(i=x;i>0;i--)
	{
		factorial=factorial*i;
	}
	return factorial;
	
}
