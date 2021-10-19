#include<stdio.h>
main()
{
	int a[]={1,2,3,4,5,6},b,size;
	printf("Enter the element to be search :");
	scanf("%d",&b);
	size=sizeof(a)/sizeof(a[0]);
	if(binarysort(a,b,0,size-1))
		printf("Element is found");
	else
		printf("Element is not found");
}
int binarysort(int a[],int search,int min,int max){
	if(max-min>=0){
		int mid=(min+max)/2;
		if(a[mid]==search)
			return 1;
		else if(a[mid]>search)
			return binarysort(a,search,min,mid-1);
		else
			return binarysort(a,search,mid+1,max);
	}
	return 0;
}

