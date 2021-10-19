#include<stdio.h>
main()
{
	int j=2;
	int k=++j;
	printf("k= %d",k);
	printf("j= %d",j);
	printf("\n");
	j=2;
	k=j++;
	printf("k= %d",k);
	printf("j= %d",j);
	printf("\n");
	int i;
	for(i=0;i++<10;)
		printf("%d\n",i);
	for(i=0;++i<=10;)
		printf("%d\n",i);
}
