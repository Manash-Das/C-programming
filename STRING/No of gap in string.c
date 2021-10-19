#include <stdio.h>
#include<string.h>
main()
{
	char string[100];
	int i,count=0;
	printf("Enter a string :");
	gets(string);
	for(i=0;string[i]!='\0';i++)
	{
		if(string[i]==' ')
		{
			count=count+1;
		}
	}
	if(count!=0)
	{
		printf("No of gap in the string :%d",count);
	}
	else
	{
		printf("There is no gap in the string");
	}
}

