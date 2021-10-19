#include <stdio.h>
#include<string.h>
main()
{
	char string[50],c,d;
	int i,a,count=0,count1=0;
	printf("Enter a string :");
	gets(string);
	a=strlen(string);
	printf("what you want to search :");
	d=getchar();
	printf("The no of letters in the string =%d\n",a);
	for(i=0;string[i]!='\0';i++)
	{
		if(string[i]=='c')
		{
			count=count+1;
		}
		
		if(string[i]==d)
		{
			count1=count1+1;
		}
	}
	printf("NO of %c in the string :%d\n",d,count1)	;
	if(count!=0)
	{
		printf("No of c in the string :%d",count);
	}
	else
	{
		printf("There is no c in the string");
	}
}

