#include<stdio.h>
main()
{
	int i,j,a,b,c;
	printf("Enter number :");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		c=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{	
				c=1;
				break;
			}			
		}
		if(c==0)
			printf("%d\n",i);
	}
}
