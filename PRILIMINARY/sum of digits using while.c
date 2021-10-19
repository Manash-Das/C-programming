#include<stdio.h>
#include<math.h>
main()
{
	int number,sum=0,digit,i=9;
	printf("Enter a number(caution : Not more than 10 digits) :");
	scanf("%d",&number);
	while(i>=0)
	{
		int exponent=pow(10,i);
		digit=number/pow(10,i);
		sum=sum+digit;
		number=number%exponent;
		i--;
		if(number==0)
		{
			break;
		}
	}
		printf("\n%d",sum);
}
