// Program to implement stack operations

#include<stdio.h>
#include<stdlib.h>

#define max 10
int st[max],top=-1;

void push(int st[],int val);
void pop(int st[]);
int peep(int st[]);
void display(int st[]);

main()
{
	int val, option;
	do
	{
		printf("\n\t\t MAIN MENU");
		printf("\n\t\t1. PUSH");
		printf("\n\t\t2. POP");	
		printf("\n\t\t3. PEEP");
		printf("\n\t\t4. DISPLAY");
		printf("\n\t\t5. EXIT");
		printf("\n\t\t Enter your option:");
		scanf("%d", &option);
		switch(option)
		{
			case 1: printf("\n\t\tEnter the value:");
					scanf("%d",&val);
					push(st,val);
					break;
			case 2: pop(st);
					break;
			case 3: val=peep(st);
					printf("\n\t\t The value stored at the top of stack is....%d",val);
					break;
			case 4: display(st);
					break;
			case 5: exit(0);
		}
	}while(option!=5);
	
	return(0);
}
void push(int st[],int val)
{
	if(top==max-1)
		printf("\n\t\t Stack Overflow");
	else
	{
		top++;
		st[top]=val;
	}
}
void pop(int st[])
{
	int val;
	if(top==-1)
	{
		printf("\n\t\t Stack Underflow:");
		
	}
		
		
	else
	{
		val=st[top];
		top--;
		printf("\n\t\t The value deleted is.....%d",val);
	}
}
void display(int st[])
{
	int i;
	if(top==-1)
		printf("\n\t\tStack is empty:");
	else
	{
		for(i=top;i>=0;i--)
			printf("\t\t %d",st[i]);
	}
}
int peep(int st[])
{
	if(top==-1)
	{
		printf("\n\t\t Stack is empty");
		
	}
	else
	{
		return(st[top]);
	}
}
