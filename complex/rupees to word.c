#include<stdio.h>
#include<math.h>
int NOI(int);
int digit(int ,int);
int place(int);
int tens(int);
int ones(int);
int check(int,int);
int ele(int);

int main()
{
	float c;
	int b,a;
	printf("Enter amount :");
	scanf("%f",&c);
	a=(int)c;
	printf("Amount = ");
	b=NOI(a);
	digit(a,b);
	printf("Rupees");
	
	//PAISE
	float pai;
	pai=c-a;
	if(pai!=0)
	{
		printf(" and ");
		pai=pai*pow(10,2)+.01;
		b=2;
		digit(pai,b);
		printf("paise");
	}
	getch();
	return 0;
}
int NOI(int a)
{
	int b,count;
	while (a>0)
	{
		b=a%10;
		a/=10;
		count+=1;
	}
	return count;
}
int digit(int a,int b)
{
	int i,d,c;
	while(b>0)
	{
		c=pow(10,b-1);
		d=a/c;
		if(d>0)
		{
			a=a%c;
		}
		if(d!=0)
		{
			if(b==2||b==5||b==7||b==9)
			{
				if(d==1)
				{
					a=check(a,b-2);
					b=b-1;
					printf(" ");
				}
				else
				{
					tens(d);
					printf(" ");
				}
			}
			else
			{
				ones(d);
				printf(" ");
			}
			place(b);	
			printf(" ");
		}
		b--;
	}
}
int place(int b)
{
	switch(b)
	{
		case 1:
		case 2:
		case 5:
		case 7:
			printf("");
			break;
		case 3:
			printf("hundred");
			break;
		case 4:
			printf("thousand");
			break;
		case 6:
			printf("lakh");
			break;
		case 8:
			printf("crore");
			break;
		default:
			printf("error #111");
			break;			
	}
}
int ones(int a)
{
	switch(a)
	{
		case 1:
			printf("one");
			break;
		case 2:
			printf("two");
			break;
		case 3:
			printf("three");
			break;
		case 4:
			printf("four");
			break;
		case 5:
			printf("five");
			break;
		case 6:
			printf("six");
			break;
		case 7:
			printf("seven");
			break;
		case 8:
			printf("eight");
			break;
		case 9:
			printf("nine");
			break;
		default:
			printf("Error #137!!");
	}
	return 0;
}
int tens(int a)
{
	switch(a)
	{
		case 1:
			printf("ten");
			break;
		case 2:
			printf("twenty");
			break;
		case 3:
			printf("thirty");
			break;
		case 4:
			printf("fourty");
			break;
		case 5:
			printf("fifty");
			break;
		case 6:
			printf("sixty");
			break;
		case 7:
			printf("seventy");
			break;
		case 8:
			printf("eighty");
			break;
		case 9:
			printf("ninty");
			break;
		default:
			printf("#175 Error!!");
	}
	return 0;
}
int check(int a,int b)
{
	int c,d,e;
	c=pow(10,b);
	d=a/c;
	ele(d);
	a=a%c;
	return(a);
	
}
int ele(int a)
{
	switch(a)
	{
		case 0:
			printf("ten");
			break;
		case 1:
			printf("eleven");
			break;
		case 2:
			printf("twelve");
			break;
		case 3:
			printf("thirteen");
			break;
		case 4:
			printf("Fourteen");
			break;
		case 5:
			printf("Fifteen");
			break;
		case 6:
			printf("Sixteen");
			break;
		case 7:
			printf("Seventeen");
			break;
		case 8:
			printf("eighteen");
			break;
		case 9:
			printf("ninteen");
			break;
		default:
			printf("Error!!");
	}
	return 0;
}

