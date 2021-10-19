#include<stdio.h>
int greater(float,float,float);
main(){
	float a,b,c;
	printf("\nEnter 1st number :");
	scanf("%f",&a);
	printf("\nEnter 2nd number :");
	scanf("%f",&b);
	printf("\nEnter 3rd number :");
	scanf("%f",&c);
	greater (a,b,c);
}
int greater (float a,float b,float c)
{
	if(a==b && b==c)
	{
		printf("\nAll number are same");
	}
	else if(a>=b && a>=c)
	{
		printf("\n %.2f is greater among all number",a);
	}
	else if(b>=a && b>=c)
	{
		printf("\n%.2f is greater among all number",b);
	}
	else
	{
		printf("%.2f is greater among all number",c);
	}
}
