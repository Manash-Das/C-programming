#include<stdio.h>
#include<stdlib.h>
main()
{
	int num,num1;
	FILE *fptr;
	fptr=fopen("123.txt","w");
	printf("Enter num :");
	scanf("%d",&num);
	fprintf(fptr,"%d",num);
	fclose(fptr);
	return 0;
}
