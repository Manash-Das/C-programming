#include<stdio.h>
main()
{
	int i,j,n=5,temp,a[5]={5,3,7,2,8};
//	printf("How many number you are going to input :");
//	scanf("%d",&n);
	int k;
//	printf("Enter %d elements :",n);
//	for(i=0;i<n;i++)
//		scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		for(j=0;j<n-1;j++){
			if(a[j+1]<a[j])
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
				}	
			}
		}
	
	printf("Sorted elements :");
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
	return 0;
}
