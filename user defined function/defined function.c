#include<stdio.h>

main()
{
	int length,breadth,area,perimeter;
	printf("\n\nEnter length :");
	scanf("%d",&length);
	printf("Enter breadth :");
	scanf("%d",&breadth);
	area=Area(length,breadth);
	printf("\n\nArea of the rectangle :%d\n\n",area);
	perimeter=Perimeter(length,breadth);
	printf("Perimeter of the rectangle :%d",perimeter);
}
int Area(a,b)
{
	int area;
	area=a*b;
}

int Perimeter(a,b)
{
	int perimeter;
	perimeter=2*(a+b);}

	
