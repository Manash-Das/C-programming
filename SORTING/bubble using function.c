#include<stdio.h>
int Bubble(int n,int a[n]);
main()
{
	int n,i,a[n],j;
	printf("Enter number of element");
	scanf("%d",&n);
	printf("Enter list of number\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	Bubble(n,a);
	
}
int Bubble(int n,int a[n])
{
	int i,j,c;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j+1]<a[j])
			{
				c=a[j];
				a[j]=a[j+1];
				a[j+1]=c;
			}
		}
	}
	printf("List of element is accending\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
