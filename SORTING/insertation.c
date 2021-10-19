#include<stdio.h>
int main()
{
	int n, array[1000],c,j,t,temp;
	printf("Enter number of elements");
	scanf("%d",&n);
	printf("Enter %d integers\n",n);
	for(c=0;c<n;c++)
		scanf("%d",&array[c]);
	for(c=1;c<=n-1;c++)
	{
		temp=array[c];
		j=c-1;
		while(j>=0 && array[j<temp])
		{
			array[j+1]=array[j];
			j--;
		}
	array[j+1]=temp;
	}
printf("Sorted  list in decending order :\n");
for(c=0;c<=n-1;c++)
{
	printf("%d\n",array[c]);
}
return 0;
}
	
