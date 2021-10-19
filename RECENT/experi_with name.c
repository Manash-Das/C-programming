#include<stdio.h>
#include <unistd.h>
main()
{	
	int j,i,d=205;
	printf("\n\n");
	while(d>0)
	{
		printf("\n");
		for(i=0;i<88;i++)
		{
			system("cls");
			for(j=0;j<i;j++)
			{
				printf(" ");
			}
			printf("MANASH DAS\n");
			printf("\t");
			printf("MANASH DAS\n");
			for(j=0;j<i;j++)
				printf(" ");
			printf("ECE");
			usleep(100000);
		}
	}
}
