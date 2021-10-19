#include<stdio.h>
#include<math.h>
main()
{
		int a,b,c,i,d,e;
		
		float quad,quad_2;
		while(i=1)
		{
			printf("\n");
			printf("We are going to find roots of the quadratic equation ");
			printf("\nEnter coefficient of x2 : ");
			scanf("%d",&a);
			printf("Enter coefficient of x : ");
			scanf("%d",&b);
			printf("Enter the constant : ");
			scanf("%d",&c);
			d=(b*b)-4*a*c;
			if (d>=0)
			{
				quad =(-b+sqrt(d))/2*a;
				quad_2 =(-b-sqrt(d))/2*a;
				printf("The roots of the quadratic equation is n =  %f",quad);
				printf("%d",d);
				printf("\nThe roots of the quadratic equation is n =  %f",quad_2);
			}
			else
				{
					printf("\nThe roots are imaginary");
				}
		printf("\npress 1 to continue and 2 to quit");
		scanf("%d",&e);
		if(e==1)
			{
			continue;
			
			}
		else
			break;
		
		}
}
