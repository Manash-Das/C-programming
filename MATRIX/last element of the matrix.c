#include <stdio.h>
main ()
{
	int a[5][6], i,j;
		printf("we are making a matrix of 4*5\n");
		printf("Enter elements of the matrix\n");
		//input of matrix using array
		for (i=1;i<5;i++) 
		{
			for (j=1;j<6;j++)
			{printf("Enter (%d,%d) elements of the matrix :",i,j);
				scanf("%d",&a[i][j]); 
			}
		}
		//print of matrix using array
		printf("your matrix is :\n");
		for(i=1;i<5;i++)
		{printf("\t");
			for (j=1;j<6;j++)
			{printf("%4d",a[i][j]);}
			printf("\n");}
		printf("Your last element is :");
		printf("%d\n",a[4][5]);
		}


