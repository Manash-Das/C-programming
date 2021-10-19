#include<stdio.h>
main()
{
	int i=1,count=0;
	int a;
	scanf("%d",&a);
	while(i==1)
	{
		a=a/10;
		if(a!=0)
		{
			count=count+1;
		}
		if(a==0)
		
		{
			break;
		}
	}
	printf("%d",count);
}
