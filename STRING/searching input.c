///searching
#include<stdio.h>
#include<string.h>
main()
{
	int i,flag=0;
	char option[30],letter,list[50];
	printf("hello");
	printf("Enter the string");
	scanf("%s",&list);
	printf("Enter the letter you want to search in the list :");
	scanf("%s",&letter);
	for(i=0;i<=strlen(list);i++)
	{
		if (list[i]==letter)
		{
			printf("Succesfully found it is in the position :%d",i+1);
			printf("\nDo you want to search further (yes/no):");
			scanf("%s",&option);
			if(strcmp(option,"no")==0)
			{
				flag=1;
				printf("Ok");
				break;
			}
		}
	}
	if (flag==0)
	{
		printf("not found");
	}
}
