#include<stdio.h>
#include<math.h>
main()
{
	int j,a,b,c;
	///printf("Enter not more than 5 digit number :");
	///scanf("%d",&a);
	for(j=0;j<100000;j++)
	{
		a=j;
		c=a;
		int i=10000000,count=0;
		while(i<=10000000)
		{
			b=a/i;
			count=count+pow(b,3);
			a=a%i;
			if(a==0)
			{
				break;
			}
			i=i/10;
		}
		if(count==c)
			printf("%d is Armstrong number\n",c);
	}
}
