#include<stdio.h>
main()
{
	char s[100];
	int l,i,a,count;
	int flag,j,k=1;
	///for(i=0;i<1000;i++)
	///{
		count=0;
		flag=0;
		printf("Enter a string :");
		gets(s);
		for(i=0;s[i]!='\0';i++)
		{
			count=count+1;
		}
		i=0;
		for(j=count;j>=count/2+1;j--)
		{
			if(s[i]==' ')
			{
				i++;
			}
			if(s[j-1]==' ')
			{
				j--;
			}
			if(s[i]!=s[j-1])
			{
				flag=1;
				break;
			}
			i++;
		}
		if(flag==0)
			printf("string is Palindrome");	
		else
			printf("string is not palindrome");
	///	printf("\nDo you want to repeat(1 to continue, 0 to end) :");
	///	scanf("%d",&l);
	///	if(l==0)
	///		break;
	///}
}

