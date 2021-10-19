#include<stdio.h>
void add_number(void);
main()
{
	add_number();
}
void add_number(void)
{
	int a,b,sum,c;
	
	printf("Enter 1st number :");
	scanf("%d",&a);
	
	printf("Enter 2nd number :");
	scanf("%d",&b);
	
	printf("Enter 3rd number :");
	scanf("%d",&c);
	
	sum=a+b+c;
	printf("Sum of the number :%d",sum);
	
}
