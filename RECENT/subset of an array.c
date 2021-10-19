#include<stdio.h>
main()
{
	int s[5]={1,2,3,4,5},i,j,k;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			for(k=0;k<=j;k++){
				printf("%d",s[k]);
			}
			printf("\n\n");
		}
	}
}
