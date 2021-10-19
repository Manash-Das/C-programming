#include<stdio.h>
main()
{
	int i,count=0;
	char *word,string[]="Corona shows a positive impact on nature";
	word =string;
	for(i=0;*(word)!='\0';i++)
	{
		count=count+1;
		word++;
	}
	printf("\nLength of the string is =%d",count);
}

