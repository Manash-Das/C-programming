#include<stdio.h>
#include<math.h>
int deci(int a);
int frac(float a);
main()
{
	float a,e;
	int b,d,c,count=1;
	printf("Enter a number :");
	scanf("%f",&a);
	d=b=a;//decimal part
	while(ceil(a)!=floor(a))//number of digits after decimal
	{
		a=a*10;
		count++;
	}
	if(count!=1)
	{
		b=b*pow(10,count-1);
		c=a-b;//fraction part
		e=c/pow(10,count-1);
	}
	printf("Here is your binary conversion :");
	deci(d);
	if(count!=1)
	{
		printf(".");
		frac(e);
	}
	getch();
}
int deci(int a)
{
	int i,y=1;
	int s[10];
	for(i=0;a!=0;i++)
	{
		s[i]=a%2;
		a=a/2;
		y++;
	}
	for(i=i-1;i>=0;i--)
		printf("%d",s[i]);
}
int frac(float a)
{
	float b;
	int i,y=1;
	int s[10];
	for(i=0;i<4;i++)
	{
		b=a*2;
		s[i]=floor(b);
//		printf("%3d",c);
//		printf("%3d",s[i]);
		a=b-s[i];
//		printf("%10f\n",a);
		y++;
	}
	for(i=0;i<4;i++)
		printf("%d",s[i]);

}
