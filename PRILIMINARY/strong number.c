/*The sum of the factorial of individual digits of a number 
is equal to the same number. 
Sometimes the Strong number also called Krishnamurthy Number. 
So, 145 is a strong number. ... So, 40585 is a strong number.
*/

#include<stdio.h>
#include<math.h>
int fact(int);
int digits(int);
main()
{
	int a,d,b,c,j,i,count=0;
	printf("Enter number :");
	scanf("%d",&a);
	j=digits(a);
	i=pow(10,j-1);
	d=a;
	while(i>=1)
	{
		b=a/i;
		c=fact(b);
		count=c+count;
		a=a%i;
		i=i/10;
		if(a<0)
			break;
	}
	printf("Value =%d\n",count);
	if(count==d)
		printf("This is a strong number");
	else
		printf("This is not a strong number");
}
int fact(int d)
{
	int fact=1,i;
	for(i=1;i<=d;i++)
	{
		fact=fact*i;
	}
	return fact;
}
int digits(int a)	
{
	int i=1,count=0;
	while(a>0)
	{
		if(a!=0)
			count=count+1;
		if(a==0)
			break;
		a=a/10;
	}
	return count;
}
