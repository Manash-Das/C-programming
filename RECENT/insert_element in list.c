#include<stdio.h>
#include<stdlib.h>
main()
{
	int i,item,pos;
	int a[5]={1,2,3,4,5};
	printf("Here is the list ...........");
	for(i=0;i<5;i++)
		printf("%d ",a[i]);
	printf("\n");
	printf("Enter the element :");
	scanf("%d",&item);
	printf("Enter the postion in which you want to the insert the element :");
	scanf("%d",&pos);
	if(pos>7){
		printf("Wrong position");
		exit(1);
	}
	int x[6];
	for(i=0;i<6;i++)
	{
		if(i<pos-1){
			x[i]=a[i];
		}
		else if(i==pos-1){
			x[i]=item;
		}
		else{
			x[i]=a[i-1];
		}
	}
	for(i=0;i<6;i++){
		printf("%d",x[i]);
	}
	
}
