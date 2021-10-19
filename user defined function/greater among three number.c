#include<stdio.h>
void greater(void);
main()
{greater ();}

void greater (){
	int a,b,c;
	printf("\nEnter 1st number :");
	scanf("%d",&a);
	printf("\nEnter 2nd number :");
	scanf("%d",&b);
	printf("\nEnter 3rd number :");
	scanf("%d",&c);
	if(a==b && b==c)
	{
		printf("\nAll number are same");
	}
	else if(a>=b && a>=c)
	{
		printf("\n %d is greater among all number",a);
	}
	else if(b>=a && b>=c)
	{
		printf("\n%d is greater among all number",b);
	}
	else
	{
		printf("%d is greater among all number",c);
	}
}
