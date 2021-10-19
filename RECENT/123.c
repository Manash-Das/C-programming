// Linear Queue Operation
#include<stdio.h>
#include<stdlib.h>
#define MAX 20

void qinsert(int queue[],int val,int *front, int *rear)
{
		if(*rear==MAX-1)
		{
			printf("Overfolow");
			return;
		}
		else 
		{
			if(*front==-1 && *rear==-1)
				*front=*rear=0;
			else
				*rear=*rear+1;	
		}
		queue[*rear]=val;
}
int qdelete(int queue[],int *front,int *rear)
{
	int val;
	static int f;
	
	if(*front=-1 && *front>*rear)
	{
		printf("Underflow");
		return;
	}
	else
	{
		*front=f;
		printf("\n\t\t The deleted element from the queue is.......%d",queue[*front]);
		*front=*front+1;
		f=*front;
		return(f);
	}
	
}
int peep(int queue[],int front)
{
	return(queue[front]);
}
void qdisplay(int queue[],int front,int rear)
{
	int i;
	if(front==-1&& rear==-1 || front>rear)
		printf("\n\t\t The queue is empty");
	else
	{
		for(i=front;i<=rear;i++)
			printf(" %d",queue[i]);	
	}
	
}
main()
{
	int val, option,queue[MAX],rear=-1,front=-1;;
	do
	{
		printf("\n\t\t MAIN MENU");
		printf("\n\t\t1. INSERT");
		printf("\n\t\t2. DELETE");	
		printf("\n\t\t3. PEEP");
		printf("\n\t\t4. DISPLAY");
		printf("\n\t\t5. EXIT");
		printf("\n\t\t Enter your option:");
		scanf("%d", &option);
		switch(option)
		{
			case 1: printf("\n\t\tEnter the value to be inserted in the queue:");
					scanf("%d",&val);
					qinsert(queue,val,&front,&rear);
					break;
			case 2: front=qdelete(queue,&front,&rear);
					break;
			case 3: val=peep(queue,front);
					printf("\n\t\t The value at the front of the queue is....%d",val);
					break;
			case 4: qdisplay(queue,front,rear);
					break;
			case 5: exit(0);
		}
	}while(option!=5);
	
	return(0);
}

