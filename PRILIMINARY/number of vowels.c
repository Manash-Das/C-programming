#include<stdio.h>
#include<string.h>
main()
{
	int count=0,i,j;
	char str[100]="hello how are you";
	printf("\nENTER A STRING: ");
	gets(str);
	for(i=0;i<strlen(str);i++)
	{
		 if(str[i]=='a' || str[i]=='A' || str[i]=='e' || str[i]=='E' || str[i]=='i' || str[i]=='I' || str[i]=='o' || str[i]=='O' || str[i]=='u' || str[i]=='U')	
		{
			count=count+1;
		}
	}
	printf("Number of vowels in the string is :%d",count);
}
