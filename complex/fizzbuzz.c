#include<stdio.h>
main()
{
	int i,b,c,d;
	for (i=1;i<=50;i++)
	if(i%3==0 && i%5==0)
	{
		printf("\n %d",i);
		printf(" = fuzzbuzz");
	}
	else
	{
	
        if(i%3==0)
        {
		  printf("\n %d",i);
            printf(" = fuzz");
    	}
		else
        {
            if(i%5==0)
            {
                printf("\n %d",i);
                printf(" = buzz");
			}
			else
                printf("\n %d",i);
		}
	}
}

