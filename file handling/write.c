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
	fprintf(fptr,"%d",num);
	fclose(fptr);
	return 0;
}
