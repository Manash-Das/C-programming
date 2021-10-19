#include<stdio.h>
int main() 
{
	void *P ;
	int a = 5;
	char b = 'z';
	P = &a ;
	
	printf( "value of a = %d\n",P); //Deferencing a void pointer 
	P = &b ;
	printf( "value of b = %d\n", *(char*)P ); 
 
	return 0 ;
} 
