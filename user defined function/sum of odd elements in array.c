#include<stdio.h>
void Array();
main()
{
	Array();
}
void Array()
{
	int number,i;
	printf("\nNo. of elements you want to enter in the list :");
	scanf("%d",&number);
	float a[number],c=0;
	printf("Please Enter %d's elements\n",number);
	for(i=0;i<number;i++)
	{
		printf("Enter %d element :",i+1);
		scanf("%f",&a[i]);
	}
	for(i=0;i<number;i+=2)
	{
		c=c+a[i];
	}
	printf("Sum of odd elements of the array is :%.2f",c);
}
