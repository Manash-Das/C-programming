#include<stdio.h>
#include<stdlib.h>
int main()
{	
	int i,n,*ptr,sum=0;
	printf("Enter number of elements");
	scanf("%d",&n);
	
	ptr=(int*)malloc(n *sizeof(int));
	printf("%u",sizeof(int));
	
	if(ptr==NULL)
	{
		printf("Error !");
		exit(0);
	}
	
	printf("Enter elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
		printf("%d",ptr+i);
		sum+=*(ptr+i);
	printf("\n");
	}
	
	printf("Sum =%d",sum);
	free(ptr);
	return 0;
	
}	
