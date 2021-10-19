#include<stdio.h>
main()
{
	int a,b,c,d,e;
	printf("1=addition");
	printf("2=substraction\n");
	printf("3=multiply\n");
	printf("4=division\n");
	scanf("%d",&a);
	switch(a){
		case 1:
			printf("Enter a number");
			scanf("%d",&b);
			printf("Enter another number");
			scanf("%d",&c);
			d=b+c;
			printf("%d",d);
			break;
		case 2:
			printf("Enter a number");
			scanf("%d",&b);
			printf("Enter another number");
			scanf("%d",&c);
			d=b-c;
			printf("%d",d);
			break;
		case 3:
			printf("Enter a number");
			scanf("%d",&b);
			printf("Enter another number");
			scanf("%d",&c);
			d=b*c;
			printf("%d",d);
			break;
		case 4:
			printf("Enter a number");
			scanf("%d",&b);
			printf("Enter another number");
			scanf("%d",&c);
			d=b/c;
			printf("%d",d);
			break;
		default: printf("invalid number");
			break;
		printf("do you want to quit");
		scanf("%d",&e);
	}
}
