//Live Demo
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(int argc, char** argv) {

	
	//range of different data variable;
	printf("range of different data varible\n");
    printf("CHAR_BIT    :   %d\n", CHAR_BIT);
    printf("CHAR_MAX    :   %d\n", CHAR_MAX);
    printf("CHAR_MIN    :   %d\n", CHAR_MIN);
    printf("INT_MAX     :   %d\n", INT_MAX);
    printf("INT_MIN     :   %d\n", INT_MIN);
    printf("LONG_MAX    :   %ld\n", (long) LONG_MAX);
    printf("LONG_MIN    :   %ld\n", (long) LONG_MIN);
    printf("SCHAR_MAX   :   %d\n", SCHAR_MAX);
    printf("SCHAR_MIN   :   %d\n", SCHAR_MIN);
    printf("SHRT_MAX    :   %d\n", SHRT_MAX);
    printf("SHRT_MIN    :   %d\n", SHRT_MIN);
    printf("UCHAR_MAX   :   %d\n", UCHAR_MAX);
    printf("UINT_MAX    :   %u\n", (unsigned int) UINT_MAX);
    printf("ULONG_MAX   :   %lu\n", (unsigned long) ULONG_MAX);
    printf("USHRT_MAX   :   %d\n", (unsigned short) USHRT_MAX);
	
	int i;
	printf("\n%cSize of data variable\n",174);
	for(i=0;i<21;i++)
		printf("%c",205);
	//size of data variable;
	printf("\nint 		: %d\n",sizeof(int));
	printf("long 		: %d\n",sizeof(long));
	printf("long long 	: %d\n",sizeof(long long));
	printf("unsigned 	: %d\n",sizeof(unsigned));
	printf("signed 		: %d\n",sizeof(signed));
	printf("char 		: %d\n",sizeof(char));
	printf("unsigned char	: %d\n",sizeof(unsigned char));
	printf("signed char 	: %d\n",sizeof(signed char));
	printf("double 		: %d\n",sizeof(double));
	
}
