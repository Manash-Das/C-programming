#include<stdio.h>
///finding number of digitsw
main()
{
	int i=1,count=0;
	int a;
	printf("Enter number :");
	scanf("%d",&a);
	while(a>0)
	{
		if(a!=0)
		{
			count=count+1;
		}
		if(a==0)
		
		{
			break;
		}
		a=a/10;
	}
	printf("No of digits :%d",count);
}
