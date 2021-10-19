#include <stdio.h>
main()
{
	char corona[50];
	int i;
	printf("Enter a string :");
	gets(corona);
	printf("printed odd position of letter :");
	for (i = 0; corona[i] != '\0'; i++)
	{
		if(i%2!=0)
		{
			printf("%c",corona[i]);
		}
	}
}

