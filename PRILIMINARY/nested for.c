#include<stdio.h>
int main()
{
	int i,r,c,d;
	for(i=1;i<=10;i++)
	{
		for(r=1;r<=2;r++)
		{
			for(d=2;d<=20;d=d+5)
			{
				c=i+r+d;
				printf ("i=%d r=%d d=%d c=%d\n",i,r,d,c);
			}
		}
	}
	return 0;
}
