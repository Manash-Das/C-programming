// Creation, Insertion and Deletion operations on an 1D Array
#include<stdio.h>
#include<stdlib.h>
#define N 10
int A[N],n;
void create()
{
	int item, i;
	for(i=0;i<N;i++)
		A[i]=9999;
	printf("Enter the no of elements comprising the array A[]:");
	scanf("%d",&n);
	if(n>N)
		printf("Cannot create the list");
	else
	{
		for (i=0;i<n;i++)
		{
			printf("Enter the item at position %d:",i);
			scanf("%d",&A[i]);
		}
		printf("\n\n");
		printf("The created array is\t");
		for(i=0;i<n;i++)
			printf(" %d", A[i]);
	}		
}
void insert(){
	int i,pos,key;
	if(n==0)
		printf("\nThe array is empty");
	else if(n==N)
		printf("\nThe array is full,Overflow condition:");
	else if (A[n]!=9999)
		printf("Insertion operation illegal");
	else
	{
		printf("Enter the position at which the new item is to be inserted:");
		scanf("%d",&pos);
		printf("Enter the item to be inserted:");
		scanf("%d", &key);
		for(i=n-1;i>=pos-1;i--)
			A[i+1]=A[i];
		
		A[pos-1]=key;
		n=n+1;
		
		printf("\nThe array after the insertion of the %d at %d is.......\t",key,pos);
		for(i=0;i<n;i++)
			printf(" %d",A[i]);
	}
}
void del()
{
	int i,item,pos;
	if(n==0){
		printf("\nThe deletion operation is illegal. Underflow Condition");
		exit(1);
	}
	else if(n==1){
		printf("\nThe deleted item is....... %d", A[n]);
		n--;
		printf("\nThe list is empty");
	}
	else{
		printf("\nenter the position from which the item is to be deleted:");
		scanf("%d",&pos);
		item=A[pos-1];
		for(i=pos-1;i<n;i++)
			A[i]=A[i+1];
		n=n-1;
		A[n]=9999;
	}
	printf("The array after the deletion of the item %d from position %d is.....", item,pos);
	for(i=0;i<n;i++)
		printf(" %d",A[i]);
	
}
main(){
	int a;
	while(1){
		fflush(stdin);
		printf("\n Enter your choice(1/2/3):");
		scanf("%d", &a);
		switch(a){
			case 1: create();
					break;
			case 2: insert();
					break;
			case 3:	del();
					break;
			default:exit(1); 
		}
	}
	return(0);
}

