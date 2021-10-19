#include<stdio.h>
void Sum(int a,int b,int c);
main()
{
	int a,b,c,sum;
	printf("Enter three number\n\n");
	printf("Enter 1st number :");
	scanf("%d",&a);
	printf("Enter 2nd number :");
	scanf("%d",&b);
	printf("Enter 3rd number :");
	scanf("%d",&c);
	
	Sum(a,b,c);
	
}
void Sum(int a,int b,int c)
{
	int sum;
	sum=a+b+c;
	printf("sum of three number =%d",sum);
	
}
