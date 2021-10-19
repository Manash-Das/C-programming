#include<stdio.h>
int main()
{
	char d;
	int a;
	printf("ENTER YOUR SEX");
	scanf("%c",&d);
	
	printf("ENTER YOUR age");
	scanf("%d",&a);
	
	if(d=='M')
	printf("NJJUGO CHANCES OF GIVING BIRTH TO A CHILD");
	
	else
	{
		if(d=='F')
		{
			if(a>15 && a<30)
			printf("HIGH CHANCES OF GIVING BIRTH TO A CHILD");
			else
			{
				if(a>=30 && a<55 )
				printf("LOW CHANCES OF GIVING BIRTH TO A CHILD");
				else
				printf("NO CHANCES OF GIVING BIRTH TO A CHILD");
			}
		}
		else
			{
				if(d=='T')
				printf("CHANCES OF GIVING BIRTH TO A CHILD");
				else
				printf("undefined");
			}
	}
	return 0;
}
