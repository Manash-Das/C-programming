#include<stdio.h>
int main()
{
	int end;
	printf("Enter no. of element you want to insert :");
	scanf("%d",&end);
	int arr[end],i;
	for(i=0;i<end;i++){
		printf("Enter %d element :",i);
		scanf("%d",&arr[i]);
	}
	quick_sort(0,end,arr);
	for(i=0;i<end;i++){
		printf("%d",arr[i]);
	}
	return 0;
}
quick_sort(int start,int end,int arr[]){
	if(end-start>1){
		int pivot=arr[end-1];
		int i=start-1,j;
		for(j=start;j<end;j++){
			if(arr[j]<=pivot){
				int swap=arr[j];
				arr[j]=arr[++i];
				arr[i]=swap;
			}
		}
		quick_sort(start,i,arr);
		quick_sort(i+1,end,arr);
	}
	return 0;
}
