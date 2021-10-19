#include<stdio.h>
int main()
{
	int a=20,b=30,i,j,k,l;
	int c,d,e,f,g,h;
	float m,n;
	scanf("%d %d",&a,&b);
	scanf("%d %d",&c,&d);
	scanf("%d %d",&e,&f);
	scanf("%d %d",&g,&h);
	
	i=(b-d);
	j=(a-c);
	k=(f-h);
	l=(e-g);
	
	m=i/j;
	n=k/l;
	
	if(m==n)
	printf("coordinater are in a straight line");
	
	else
	printf("coordinater are not in a straight line");
	
	printf("\n%d\n%d\n%d\n%d\n",i,j,k,l);
	printf("%f\n%f\n",m,n);
	
	return 0;
}
