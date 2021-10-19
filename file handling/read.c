#include<stdio.h>
#include<stdlib.h>
main()
{
	int num;
	FILE *fptr;
	fptr=fopen("ABC.txt","r");
	if(fptr==NULL)
	{
		printf("ERROR!");
		exit(1);
	}
	while(num==NULL)
	{
		fscanf(fptr,"%d",&num);
		printf("%d",num);
	}
	fclose(fptr);
	return 0;
}
