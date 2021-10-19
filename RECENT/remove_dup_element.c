#include<stdio.h>
#include<string.h>
int rem_dup_arr(int n,char a[n]);
main()
{
	char a[]={1,2,3,4,5,4,3,6,7,2};
	int c=strlen(a);
	rem_dup_arr(c,a);
}
int rem_dup_arr(int n,char a[n])
{
	int i,j;
	printf("Here is the non duplicate element array :");
	for(i=0;i<n;i++)
	{
		int flag=0;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				flag=1;
				break;
			}   	
		}
		if(flag==0)
		{
			static k=0;
			if(k!=0)
			{
				printf(",%d",a[i]);
			}
			else
				printf("%d",a[i]);
				k=1;
		}
	}
}
