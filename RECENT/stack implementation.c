#include<stdio.h>
#include<stdlib.h>
int stack[20];
int top=-1;
main()
{
	int option;
	printf("\n\n1: Push\n2: Peep\n3: Delete \n4: Display\n5: Exit\n");
	printf("\n\tEnter your option :");
	scanf("%d",&option);
	switch(option)
	{
		case 1:Push();main();
		case 2:Peep();main();
		case 3:Pop();main();
		case 4:Display();main();
		case 5:exit(0);
		default: printf("\n\tInvalid choose again!!\n");main();
	}
}
int Push()
{
	if(top>=20)
		printf("\n\tStack is overflow");
	else{
		int element;
		printf("\n\tEnter the element you want to insert :");
		scanf("%d",&element);
		stack[++top]=element;
	}
}
int Peep()
{
	if(top==-1)
		printf("\n\tStack is empty");
	else
		printf("\n\tThe front element is :%d",stack[top]);
}
int Pop()
{
	if(top==-1)
		printf("Stack is empty");
	else
		printf("\n\tDeleted element is :%d",stack[top--]);
}
int Display()
{
	int i;
	if(top==-1){
		printf("\n\tStack is empty");
	}
	else{
		printf("\n\tElements in the list :");
		for (i=0;i<=top;i++)
			printf("%d,",stack[i]);
	}
}
