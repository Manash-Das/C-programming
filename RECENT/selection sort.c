#include<stdio.h>
main()
{
	int l[]={9,8,7,0,5,8,3,2 };
	int i,siz=sizeof(l)/4,j,k;
	int num;
	for(i=0;i<siz;i++){
		num=i;
		for(j=i+1;j<siz;j++){
			if(l[j]<l[num]){
				num=j;
				}
			}
			if(num!=i){
			int temp=l[num];
			l[num]=l[i];
			l[i]=temp;
		}
	}
	for(k=0;k<siz;k++){
			printf("%d",l[k]);}

}
