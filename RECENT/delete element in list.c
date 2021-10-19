#include<stdio.h>
#include<stdlib.h>
main()
{
	int i,item,pos;
	int a[5]={7,5,3,2,3};
	printf("Here is the list ...........");
	for(i=0;i<5;i++)
		printf("%d ",a[i]);
	printf("\n");
	printf("Enter the postion in which you want to the insert the element :");
	scanf("%d",&pos);
	if(pos>5){
		printf("Wrong position");
		exit(1);
	}
	int x[4];
	for(i=0;i<4;i++)
	{
		if(i<pos-1){
			x[i]=a[i];
		}
		else{
			x[i]=a[i+1];
		}
	}
	for(i=0;i<4;i++){
		printf("%d",a[i]);
	}
	
}
