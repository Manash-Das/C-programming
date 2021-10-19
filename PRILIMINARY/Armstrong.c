/*Armstrong number is a number that is equal to the sum of cubes of its digits.
For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.
*/
#include<stdio.h>
#include<math.h>
int digits(int);
main()
{
	int j,a,b,c;
	printf("Enter number not more than 9 digits:");
	scanf("%d",&a);
	c=a;
	j=digits(a);
	int i=pow(10,j-1),count=0;
	while(i>0)
	{
		b=a/i;
		count=count+pow(b,3);
		a=a%i;
		if(a==0)
		{
			break;
		}
		i=i/10;
	}
	printf("result =%d\n",count);
	if(count==c)
		printf("Armstrong number");
	else
		printf("Not an armstrong number");
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
