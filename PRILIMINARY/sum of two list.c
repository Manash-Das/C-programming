#include <stdio.h>
main()
{
	int number;
	printf("Enter number of element in the list :");
	scanf("%d",&number);
	int i,j,k,a[number+1],b[number+1],sum;
	printf("Enter elements in 1st array :\n");
	for(i=0;i<number;i++)
	{
		printf("\tEnter %d element in 1st array :",i+1);
		scanf("%d",&a[i]);
	}
	printf("\nEnter elements in 2nd array :\n");	
	for(j=0;j<number;j++)
	{
		printf("\tEnter %d element in 2nd array :",j+1);
		scanf("%d",&b[j]);
	}
	printf("Sum of two array");
	for(k=0;k<number;k++)
	{
		printf("\nsum of %d elements of 1st and 2nd array :%d",k+1,a[k]+b[k]);
		
	}
}
