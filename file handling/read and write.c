#include<stdio.h>
#include<stdlib.h>
main()
{
	int num;
	FILE *fptr,*write;
	fptr=fopen("read.txt","r");
	if(fptr==NULL)
	{
		printf("ERROR!");
		exit(1);
	}
	printf("Enter a value");
	scanf("%d",&num);
	
	write=fopen("write.txt","w");
	if(write==NULL)
	{
		printf("ERROR!");
		exit(1);
	}
	fprintf(write,"%d",num);
	fclose(fptr);
	fclose(write);
	
	
	return 0;
}
