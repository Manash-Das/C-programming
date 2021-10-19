//write a function that takes an integer parameter m representing the month number of the year and returns the corresponding name of the month
#include<stdio.h>
int month(int);
main()
{
	int mon;
	printf("Enter month number :");
	scanf("%d",&mon);
	if(mon>=1&&mon<=12)
	{
		printf("The month is :");
		month(mon);
	}
	else
	{
		printf("Invalid number\n");
		main();
	}
}
int month(int mon)
{
	switch(mon)
	{
		case 1:
			printf("JANUARY");
			break;
		case 2:
			printf("FEBURARY");
			break;
		case 3:
			printf("MARCH");
			break;
		case 4:
			printf("April");
			break;
		case 5:
			printf("MAY");
			break;
		case 6:
			printf("JUNE");
			break;
		case 7:
			printf("JULY");
			break;
		case 8:
			printf("AUGUST");
			break;
		case 9:
			printf("SEPTEMBER");
			break;
		case 10:
			printf("OCTOBER");
			break;
		case 11:
			printf("NOVEMBER");
			break;
		case 12:
			printf("December");
			break;
		default :
			printf("ERROR!!");
	}
}
