#include<stdio.h>
int main(){
	int key;
	scanf("%d",&key);
	int a[]={1,2,3,4,5,6,7};
	int high=sizeof(a)/sizeof(a[0]);
	BinarySearch(a,key,0,high);
}
BinarySearch(int a[],int key,int low, int high){
	int mid=(low+high)/2;
	if(mid<high){
		printf("%d",mid);
		printf("%d",high);
		if(a[mid]==key){
			printf("Found");	
		}
		else if (key<a[mid]){
			BinarySearch(a,key,0,mid-1);
		}
		else{
			BinarySearch(a,key,mid+1,high);
		}
	}
//	printf("Not found");
	main();
}
