///searching
#include<stdio.h>
#include<string.h>
void searching();
main()
{
	int i;
	char option[20];
	searching();
	i=1;
	while(i<2)
	{
		printf("\nDo you want to search another letter (yes/no):");
		scanf("%s",&option);
		if(strcmp(option,"yes")==0)
		{
			searching();
		}
		else
			if(strcmp(option,"no")==0)
			{
				i=i+1;
			}
			else
			{
				printf("Invalid Enter yes or no");
			}
		
	}
}
void searching()
{
	int i,flag=0;
	char option[30], letter,list[50]="Hi! my name is manash das";
	printf("\nEnter the letter you want to search in the list :");
	scanf("%s",&letter);
	for(i=0;i<=strlen(list);i++)
	{
		if (list[i]==letter)
		{
			printf("\nSuccesfully found it is in the position :%d",i+1);
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
		printf("\nnot found");
	}
}
