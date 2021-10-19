#include<stdio.h>
main(){
	int key,num,i,start=0;
	printf("Enter number of element you want to insert :");
	scanf("%d",&num);
	int arr[num];
	for(i=0;i<num;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter element you want to search :");
	scanf("%d",&key);
	recur_bin(start,num,arr,key);
}
int recur_bin(int start,int num,int arr[num],int key){
	if(start<=num){
		int check=(start+num)/2;
		if(arr[check]==key){
			printf("Element found");
			return 0;
		}
		else if(arr[check]>key)
			return recur_bin(start,check-1,arr,key);
		else
			return recur_bin(check+1,num,arr,key);
	}
	else
		printf("Element not found");
}
