#include<stdio.h>
main()
{
	char a;
	printf("Enter a character :");
	scanf("%c",&a);
	if(a=='a' || a=='A' || a=='e' || a=='E' || a=='i' || a=='I' || a=='O' || a=='o' || a=='u' || a=='U'){
		printf("Entered character is vowel");
		}
	else{
		printf("Entered character is consonant");
		}
		
	printf( "This will\
	print over three\
	lines, ( and will include extra tabs or spaces. )" );
	printf( "This will "
	"print over a single "
    "line, ( without extra tabs or spaces! )" );
}

