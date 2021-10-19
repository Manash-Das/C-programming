#include<stdio.h>
#include<math.h>
void addition ();
void substract ();
void multiply();
void division ();
void power ();
main()	
	{printf("\n\nEnter two number\n Find\n   1)addition\n   2)substraction\n   3)multiply\n   4)division\n   5)power");
	printf("\n1)ADDITION :\n");
	addition ();
	printf("\n\n2)SUBSTRACTION\n");
	substract ();
	printf("\n\n3)MULTIPLY\n");
	multiply ();
	printf("\n\n4)DIVISION\n");
	division ();
	printf("\n\n5)POWER\n");
	power ();
	}

void addition()	
	{	
		float a,b,c;
		printf("Enter 1st number :");
		scanf("%f",&a);
		printf("Enter 2nd number :");
		scanf("%f",&b);
		c=a+b;
		printf("The sum of two number is :%.2f",c);
	}

void substract()	
{
	float a,b,c;
	printf("Enter 1st number :");
	scanf("%f",&a);
	printf("Enter 2nd number :");
	scanf("%f",&b);
	c=a-b;
	printf("The substraction of two number is :%.2f",c);
}

void multiply()	
{
	float a,b,c;
	printf("Enter 1st number :");
	scanf("%f",&a);
	printf("Enter 2nd number :");
	scanf("%f",&b);
	c=a*b;
	printf("The multiply of two number is :%.2f",c);
}

void division()	
{
	float a,b,c;
	printf("Enter 1st number :");
	scanf("%f",&a);
	printf("Enter 2nd number :");
	scanf("%f",&b);
	c=a/b;
	printf("The division of two number is :%.2f",c);
}

void power()	
{
	float a,b,c;
	printf("Enter 1st number :");
	scanf("%f",&a);
	printf("Enter 2nd number :");
	scanf("%f",&b);
	c=pow(a,b);
	printf("The power of two number is :%.2f",c);
}

