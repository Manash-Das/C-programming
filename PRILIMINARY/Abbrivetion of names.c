#include<stdio.h>
main()
{
	int a,k,i,j;
	char s[200];
	printf("Enter string :");
	gets(s);
	printf("%c",s[0]);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==' ')
		{
			printf(".%c",s[i+1]);
			j=i+2;
		}
	}
	for(k=j;s[k]!='\0';k++)
	{
		printf("%c",s[k]);
	}
	
}
