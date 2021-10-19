#include<stdio.h>
#include<math.h>
int addition (float,float);
int substract (float,float);
int multiply (float,float);
int division (float,float);
int power (float,float);
int main()
{
	float a,b,c;
	printf("\nEnter two number\n Find\n   1)addition\n   2)substraction\n   3)multiply\n   4)division\n   5)power");
	printf("\nEnter 1st number :");
	scanf("%f",&a);
	printf("\nEnter 2nd number :");
	scanf("%f",&b);
	printf("\n1)ADDITION :\n");
	addition (a,b);
	printf("\n\n2)SUBSTRACTION\n");
	substract (a,b);
	printf("\n\n3)MULTIPLY\n");
	multiply (a,b);
	printf("\n\n4)DIVISION\n");
	division (a,b);
	printf("\n\n5)POWER\n");
	power (a,b);
}
int addition(float a,float b)	
	{	
		float c;
		c=a+b;
		printf("The sum of two number is :%.2f",c);}
int substract(float a,float b)	
	{
		float c;
		c=a-b;
		printf("The substraction of two number is :%.2f",c);}
int multiply(float a,float b)	
	{
		float c;
		c=a*b;
		printf("The multiply of two number is :%.2f",c);
	}
int division(float a,float b)	
	{
		float c;
		c=a/b;
		printf("The division of two number is :%.2f",c);
	}
int power(float a,float b)	
	{
		float c;
		c=pow(a,b);
		printf("%.0f to the  power %.0f is :%.2f",a,b,c);
	}
