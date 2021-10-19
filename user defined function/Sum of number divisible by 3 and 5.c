#include<stdio.h>
void sum();
main()
{
sum();
}
void sum()
{
	int number,i;
	printf("\nNo. of elements you want to enter in the list :");
	scanf("%d",&number);
	int a[number],c=0;
	printf("Please Enter %d's elements\n",number);
	for(i=0;i<number;i++)
	{
		printf("Enter %d element :",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<number;i++)
	{
		if(a[i]%3==0||a[i]%5==0)
		{
			c=c+a[i];
		}
	}
	printf("Sum of number divisible by 3 and 5 :%d",c);
}

