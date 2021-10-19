#include<stdio.h>
int main()
{
	int a,d,r,x,y,t,s;
	char tn;

	printf ("ENTER THE VALUE OF FIRST TERM A: ");
	scanf ("%d",&a);
	
	printf ("ENTER THE common difference d: ");
	scanf ("%d",&d);
	
	printf ("ENTER number of terms r: ");
	scanf ("%d",&r);
	
	t=a+(r-1)*d;
	printf("\nnth term %d", t);
	x=r/2;
	y=2*a+(r-1)*d;
	s=x*y;
	printf(" \nSUM OF N TERMS = %d",s);	
}
