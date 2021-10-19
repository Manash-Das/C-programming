#include<stdio.h>
#include<stdlib.h>
main()
{
	int num,num1;
	FILE *fptr;
	fptr=fopen("ABC.txt","w");
	if(fptr==NULL)
	{
		printf("ERROR!");
		exit(1);
	}
	printf("Enter num :");
	scanf("%d",&num);
	printf("Enter num :");
	scanf("%d",&num1);
	fprintf(fptr,"first number = %d\n",num);
	fprintf(fptr,"Second number = %d\n",num1);
	fprintf(fptr,"Sum of two number = %d\n",num+num1);
	fclose(fptr);
	return 0;
}
