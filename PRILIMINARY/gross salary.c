#include<stdio.h>
 main()
{
	int bs,hr,da;
	printf("ENTER YOUR BASIC SALARY : ");
	scanf("%d",&bs);
	hr=(20*bs)/100;
	da=(40*bs)/100;
	printf("YOUR HOUSE RENT IS : %d",hr);
	printf("\nYOUR DEARNESS ALLOWRENCE %d",da);
	return 0;
}
