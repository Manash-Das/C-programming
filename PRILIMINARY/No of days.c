#include<stdio.h>
int days(int,int);
int main()
{
	int a,b,c,d,leap=1;
	printf("Enter year :");
	scanf("%d",&a);
	printf("Enter month number :");
	scanf("%d",&b);
	if(a%4==0)
		leap=0;
	days(b,leap);
	
}
int days(b,leap)
{
	switch(b)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("No of days = 31");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("No of days =30");
			break;
		case 2:
			if(leap==1)
				printf("No of days =28");
			else
				printf("No of days =29");			
			break;
		default :
			printf("ERROR!");
	}
}
