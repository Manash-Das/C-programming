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
			printf("%c %c %c\n",d,d,d);
			for(j=0;j<i;j++)
				printf(" ");
			printf("%c %c %c",d,d,d);
			usleep(100000);
		}
	}
}
