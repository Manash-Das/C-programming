#include<stdio.h>
#include<math.h>
int word(int);
main()
{
	int a,b,c,i,j;
	printf("Enter a number :");
	scanf("%d",&a);
	for(i=10;i>=0;i--)
	{
		c=pow(10,i);
		b=a/c;
		if(b>0)
		{
			a=a%c;
			word(b);
			printf("  ");
		}
	}
}
int word(int a)
{
	switch(a)
	{
		case 1:
			printf("ONE");
			break;
		case 2:
			printf("TWO");
			break;
		case 3:
			printf("THREE");
			break;
		case 4:
			printf("Four");
			break;
		case 5:
			printf("FIVE");
			break;
		case 6:
			printf("SIX");
			break;
		case 7:
			printf("SEVEN");
			break;
		case 8:
			printf("EIGHT");
			break;
		case 9:
			printf("NINE");
			break;
		case 10:
			printf("ZERO");
			break;
		default:
			printf("Error!!");
	}
	return 0;
}
