#include<stdio.h>
int main(){
	int a=1,b=10,i;
	for (i=a;i<=b;i++){
		if(i%2==0 && i>3){
			printf("goldbach conjecture for %d is ",i);
			goldbach(i);
		}	
	}	
}
int goldbach(int a){
	int i,j,y,z;
	for(i=2;i<a/2+1;i++){
		y=isprime(i);
		if(y==0){
			z=isprime(a-i);
			if(z==0){
				printf("(%d,%d)",i,a-i);
			}
		}
	}
	printf("\n\n");
}
int isprime(int x){
	int i;
	for(i=2;i<x/2+1;i++){
		if(x%i==0)
			return(1);}
	return(0);
}

