#include <stdio.h>
main ()
{
	int a[3][3], i,j;
	for (i=0;i<3;i++) //this is for row
	{
		for (j=0;j<3;j++) //this is column
		{
			scanf("%d",&a[i][j]); // using this we can take the input from keyboard
		}
	}
	printf("\n printing the elements\n");
	for(i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
	{
	printf("%d\t",a[i][j]);
	}
	printf("\n");
	}

}
