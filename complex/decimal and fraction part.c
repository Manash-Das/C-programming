#include<stdio.h>
#include<math.h>
main()
{
	float a,e;
	int b,d,c,count=1;
	printf("Enter a number :");
	scanf("%f",&a);
	d=b=a;//decimal part
	while(ceil(a)!=floor(a))//number of digits after decimal
	{
		a=a*10;
		count++;
	}
	if(count!=1)
	{
		b=b*pow(10,count-1);
		c=a-b;//fraction part
	}
	printf("Decimal part = %d\n",d);
	printf("Fractional part = %d",c);
}
