#include<stdio.h>
main()
{
	int a,i,j,k,l,b;
	printf("Number of row you want :");
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		for(j=0;j<2*i;j++)
		{
			printf("  ");
		}
		for(k=0;k<a-i;k++)
		{
			printf(" *");
		}
		printf("\n");
	}
	printf("\n\n\n");
	for(i=1;i<=a;i++)
	{
		for(j=0;j<a-i;j++)
		{
			printf("  ");
		}
		for(k=0;k<i;k++)
		{
			printf(" *");
		}
		printf("\n");
	}
	for(i=a-1;i>0;i--)
	{
		for(j=0;j<a-i;j++)
		{
			printf("  ");
		}
		for(k=a-1;k>=a-i;k--)
		{
			printf(" *");
		}
		printf("\n");
	}
	printf("\n\n\n");
	
	
	if(a%2==0)
	{
		b=a/2;
	}
	if(a%2!=0)
	{
		b=(a-1)/2;
	}
	for(i=0;i<b;i++){
		for(j=b-i;j>0;j--){
			printf(" *");
		}
		for(k=(2*i)+1;k>0;k--){
			printf("  ");
		}
		for(j=b-i;j>0;j--){
			printf(" *");
		}
	printf("\n");
	}
	printf("\n");
	
	for(i=b;i>0;i--){
		for(j=b-i;j>=0;j--){
		printf(" *");
		}
		for(k=(2*i)-1;k>0;k--){
			printf("  ");
		}
	for(j=b-i;j>=0;j--){
		printf(" *");
		}
	printf("\n");
	}





	for(i=1;i<=a;i++){
		for(j=a-i;j>=1;j--){
			printf("  ");
		}
		l=1;
		for(j=2*i-1;j>0;j--){
			printf(" %d",l);
			l++;
		}
		printf("\n");
	}
		printf("\n\n\n\n");
	
	
	
	for(i=1;i<=a;i++){
		for(j=a-i;j>=1;j--){
			printf("  ");
		}
		for(j=2*i-1;j>0;j--){
			if(j==2*i-1 || j==1)
				printf(" %d",i);
			else
				printf(" 0");			
		}
		printf("\n");
	}

	printf("\n\n\n\n");
	
	b=a-1;
	for(i=a;i>0;i--){
		l=i;
		for(j=i;j>1;j--){
			printf("  ");
		}
		for(k=1;k<=a-i;k++){
				printf(" %d",l);
				l++;
		}
	printf(" 0");
	l=a-1;
		for(k=1;k<=a-i;k++){
				printf(" %d",l);
				l--;
		}	
	printf("\n");
	}
	
}

















