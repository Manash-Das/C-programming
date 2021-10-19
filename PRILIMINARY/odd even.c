#include<stdio.h>
int main()
{
	int a[10];
	int b,i;
	b=0;   
	for(i=0;i<10;i++)
	{
		b=i+1;
		printf("Enter %d number= ",b);
		scanf("%d",&a[i]);
	}
	printf("\n[");
	for(i=0;i<10;i++)
	{
		printf("%d,",a[i]);
	}
	printf("]");
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		{
			a[i]=0;
		}
		else
		{
			a[i]=1;
		}
	}
	printf("\n[");
	for(i=0;i<10;i++)
	{
		printf("%d,",a[i]);
	}
	printf("]");
}
