#include<stdio.h>
void area_of_rectangle();
void perimeter_of_rectangle();
main()
{
	int length,breadth,area,perimeter;

	printf("Enter length :");
	scanf("%d",&length);
	
	printf("Enter breadth :");
	scanf("%d",&breadth);
	area_of_rectangle();
	perimeter_of_rectangle();
}
void area_of_rectangle()
{
	area=length*breadth;
	printf("area :%d",sum);
}

void perimeter_of_rectangle()
{
	perimeter=2*(length+breadth);
	printf("perimeter :%d",perimeter);
}

