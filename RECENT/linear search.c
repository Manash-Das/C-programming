//linear search

#include<stdio.h>
main(){
	int a[7]={1,2,3,4,5,6,7};
	int i,x,flag=0;
	printf("Enter a element :");
	scanf("%d",&x);
	for(i=0;i<7;i++){
		if(a[i]==x){
			flag=1;
			break;
		}
	}
	if(flag==1){
		printf("Element found");
	}
	else{
		printf("Element not found");
	}
}
