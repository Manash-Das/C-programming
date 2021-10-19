#include<stdio.h>
#include<string.h>
int comp(char a[20],char b[20]);
main()
{
	char a[20],b[20];
	printf("Enter 1st string :");
	gets(a);
	printf("Enter 2nd string :");
	gets(b);
	comp(a,b);
	
}
int comp(char a[20],char b[20])
{
	if(strcmp(a,b)==0)
		printf("Similar string.");
	else
		printf("Different string.");
}
