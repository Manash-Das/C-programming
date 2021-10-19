#include<stdio.h>
#include<stdlib.h>
main()
{
	FILE *hi;
//	hi=fopen("ABC.txt","r");
//	if(hi==NULL)
//	{
//		printf("unable to find");
//		getch();
//		exit(0);
//	}
//	fclose(hi);
	if(remove("E:\songs\Woh Din  Version 1 -(Mr-Jatt.com).mp3")==0)
	printf("SUccesfully deleted");
	else
		printf("Unsussesfull");
	
}
