#include<stdio.h>
main()
{
	int a,b,i,j,k;
	b=0;
	printf("Enter number of row :");
	scanf("%d",&a);
		
	//solid rectangle
	printf("\n\n\n\n");
	printf("solid pattern\n\n");
	for (i=1;i<=a;i++)
	{
		printf("\t");
		for (j=1;j<=a;j++)
		{
			printf("* ");
		}
			printf("\n");
	}
	
	//Hollow rectangle
	printf("\n\n\n\n");
	printf("Hollow solid pattern\n\n");
	for (i=1;i<=a;i++)
	{
		printf("\t");
		for (j=1;j<=a;j++)
		{
			if (i==1 || i==a || j==1 || j==a)
				{printf("* ");}
		    else
				{printf("  ");}
		}
			printf("\n");
	}
	
		
	//Half pyramid
	printf("\n\n\n\n");
	printf("Half pyramid\n\n");
	for (i = 1; i <= a; i++)
    {
		printf("\t");
        for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	
	//Half inverted pyramid
	printf("\n\n\n\n");
	printf("Half inverted pyramid\n\n");
	for (i = a; i >= 1; i--)
    {
		printf("\t");
        for (j = i; j >= 1; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	
	
	//inverted hollow half pyramid
	printf("\n\n\n\n\n");
	printf("Inverted hollow half pyramid\n\n");
	
	for (i = a; i >= 1; i--)
	{
		printf("\t");
        for (j = a; j >= 1; j--)
	    {
	        if(i==a||j==1||i==j)
					printf("*");	
			else
				printf(" ");
		}
		printf("\n");
	}
	
	
	//full pyramid
	printf("\n\n\n\n");
	printf("Full pyramid\n\n");
	for(i=1;i<=a;i++)
	{
		printf("\t");
		//NO OF SPACES
		for(j=a;j>i-1;j--)
		{
			printf(" ");
		}
		//NO OF STARS
		for(k=1;k<=i;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	
	
	
	//inverted full pyramid
	//no of rows
	printf("\n\n\n\n\n");
	printf("inverted full pyramid\n\n");
	for(i=a;i>=1;i--)
	{
		printf("\t");
		//no of spaces
		for(j=a-i;j>=1;j--)
		{
			printf(" ");
		}
		//no of star
		for(k=i;k>=1;k--)
		{
			printf("* ");
		}
		printf("\n");
	}
	
	//HOLLOW PYRAMID
	printf("\n\n\n\n");
	printf("HOLLOW PYRAMID\n\n");
	for(i=1;i<=a;i++)
	{
		printf("\t");
		for(j=a;j>i-1;j--)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			if(k==1||k==i||i==a)
			{
				printf(" *");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}
