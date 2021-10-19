#include<stdio.h>
main()
{
	int n,i,s[10];
	char c,b,o;
	printf("What do you want to find :");
	scanf("%c",&c);
	printf("number to convert to :");
	scanf("%d",&n);
	switch(c)
	{
		case 'b':
		{
			
		//	binary
		printf("Binary number =");
			for(i=0;n>0;++i)
			{
				s[i]=n%2;
				n=n/2;
			}
			for(i=i-1;i>=0;i--)
			{
				printf("%d",s[i]);
			}
			break;
		}
		case 'o':
		{
		//	octatal
		printf("octal number =");
			for(i=0;n>0;++i)
			{
				s[i]=n%8;
				n=n/8;
			}
			for(i=i-1;i>=0;i--)
			{
				printf("%d",s[i]);
			}
			break;
		}
		case 'h':
		{
		//	hexadecimal
		printf("hexadecimal number =");
			for(i=0;n>0;++i)
			{
				s[i]=n%16;
				n=n/16;
			}
			for(i=i-1;i>=0;i--)
			{
				printf("%d",s[i]);
			}
			break;
		}
	}
}

