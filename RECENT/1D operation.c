#include<stdio.h>
#include<stdlib.h>
#define MAX 20
main()
{
	static int arr[MAX],option;
	printf("\n1-->Insertion\n2-->Deletition\n3-->Searching\n4-->Display\n5-->Exit\n Enter your option : ");
	scanf("%d",&option);
	switch(option)
	{
		case 1: Creation(arr);break;
		case 2: Deletition(arr);break;
		case 3: Searching(arr);break;
		case 4: Display(arr);break;
		case 5: exit(0);
	}
	main();
}
int Creation(int arr[])
{
	int i,num;
	printf("Enter no. of element <20:");
	scanf("%d",&num);
	if(num>=MAX)
	Creation(arr);
	else
	for(i=0;i<num;i++)
	scanf("%d",&arr[i]);
}
int Deletition(int arr[]){
	int del,i;
	printf("Enter the element you want to delete :");
	scanf("%d",&del);
	for(i=0;arr[i]!='\0';i++)
	if(arr[i]==del)
	while(arr[i]!='\0')
	arr[i]=arr[++i];
}
int Searching(int arr[])
{
	int search,i;
	printf("Enter the element you want to search :");
	scanf("%d",&search);
	for(i=0;arr[i]!='\0';i++){
		if(arr[i]==search){
		printf("Element found in the position %d",i+1);
		return(0);
		}
	}
	printf("Element not found");
}
int Display(int arr[])
{
	int i;
	for(i=0;arr[i]!='\0';i++)
		printf("%d,",arr[i]);
}
