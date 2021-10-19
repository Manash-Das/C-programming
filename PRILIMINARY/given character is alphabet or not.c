#include<stdio.h>
main()
{
	char a;
	scanf("%c",&a);
	if(('a'<=a && 'z'>=a)||('A'<=a && 'Z'>=a))
	{
		printf("It is a alphabet");
	}
	else
	{
		printf("go to hell");
	}
	int b;
	b=a;
	if((b>=65 && b<=90)||(b>=97 && b<=122))
	{
		printf("\nits a alphabets");
	}
}
/*
	The ASCII values of lower case alphabets are from 65 to 90 and the
 	ASCII values of upper case alphabets are from 97 to 122. 
*/
