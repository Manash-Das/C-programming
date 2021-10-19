#include<stdio.h>
int j=0;
main()
{
	int num;
	printf("Enter no. of element you want to insert :");
	scanf("%d",&num);
	int arr[num],i;
	for(i=0;i<num;i++)
		scanf("%d",&arr[i]);
	partition(arr,0,num);	
	for(i=0;i<num;i++)
		printf("%d\n",arr[i]);
	
}
int mergesort(int arr[],int start,int end)
{
	int i;
	printf("%d-->\n",end);
	for(i=0;i<end;i++)
		printf("%d,",arr[i]);
	printf("\n");
	int arr1[end/2],arr2[end/2+1],j,k;
	for(i=start;i<=end/2;i++)
		arr1[i]=arr[i];
	for (i=end/2+1;i<end;i++)
		arr2[i]=arr[i];
	i=j=k=0;
	while(i<end/2 && j<end-(end/2+1)){
		if(arr1[i]<arr2[j]){
			arr[k]=arr[i];
			i++;
		}
		else{
			arr[k]=arr[j];
			j++;
		}
		k++;
	}
	while(i<end/2)
	{
		arr[k]=arr1[i];
		i++;
		k++;
	}
	while(j<end-(end/2+1))
	{
		arr[k]=arr2[j];
		j++;
		k++;
	}
}
int partition(int arr[],int start,int end)
{
	if(end>start){
		printf("%d,%d\n",start,end);
		partition(arr,start,(start+end)/2);
		printf("%d\n\n\n",end/2+1);
		partition(arr,(start+end)/2+1,end);
		mergesort(arr,start,end);
	}
}
