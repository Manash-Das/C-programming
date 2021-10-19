#include<stdio.h>
main()
{
	unsigned char ch=128;
	signed char ch1=128;
	printf("\n%d%c\n",ch,ch);
	printf("\n%d%c\n",ch1,ch1);
	
	printf("\n\n");
	
	for(ch=0;ch<=255;ch++)
	{
		printf("%d,%c\n",ch,ch);
	}
	
	printf("\n\n");
	
	for(ch=0;ch<=255;ch++)
	{
		printf("%d,%c\n",ch,ch);
	}
	
	printf("\n\n");
	
}
