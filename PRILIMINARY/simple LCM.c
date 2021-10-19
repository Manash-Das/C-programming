#include<stdio.h>
main()
{
	int a,z=1,b,d,c,i,j=1,k=1;
	while(z==1)
	{
		printf("Enter 1st nnumber");
		scanf("%d",&a);
		printf("Enter 2nd nnumber");
		scanf("%d",&b);
		z=a*b;
		if(a>b){
			c=a;
		}
		else{
			c=b;
		}
		for(i=2;i<c;i++)
		{
			if(a%i==0 && b%i==0)
			{
				a=a/i;
				b=b/i;
				k=i*k;
				i-=1;
			}
			else
			{
				if(a%i==0)
				{
					a=a/i;
					j=j*i;
				}
				else
				{
					if(b%i==0)
					{
						b=b/i;
						j=j*i;
					}
				}
			}
		}
		
		printf("GDP =%d\n",k);
		printf("LCM =%d",k*j);
		printf("\nDO YOU WANT TO REPEAT(press 0 to stop)");
		scanf("%d",&d);
		if(d==0)
		{
			z=2;
		}
	}
}
