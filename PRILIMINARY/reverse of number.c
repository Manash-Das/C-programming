#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h,i,j;
	printf("ENTER A NUMBER :");
	scanf("%d",&a);
	b=a/10000;
	c=a%10000;
	
	d=c/1000;
	e=c%1000;
	
	f=e/100;
	g=e%100;
	
	h=g/10;
	i=g%10;

	j=i*10000 + h*1000 + f*100 + d*10 + b;
	printf("REVERSE NUMBER IS: %d",j);
	getch();
	return 0;
		
}
