#include<stdio.h>
main()
{
	int a,z,b,c,i,j=1,k=1;
	scanf("%d",&a);
	scanf("%d",&b);
	z=a*b;
	if(a>b){
		c=a;
	}
	else{
		c=b;
	}
	for(i=2;i<c;i++)
	{
		if(a%i==0 && b%i==0)
		{
			k=i;
		}
	
}
	printf("GDP =%d\n",k);
	printf("LCM =%d",z/k);
}
