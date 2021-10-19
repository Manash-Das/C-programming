#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int main()
{
	static int queue[MAX],option,rear=0,front=0;
	printf("\n\
			1 : Enqueue\n\
			2 : Dequeue\n\
			3 : Peep\n\
			4 : Display\n\
			5 : Exit\n");
	printf("Enter your option :");
	scanf("%d",&option);
	switch(option)
	{
		case 1: Enqueue(&rear,queue);break;
		case 2: Dequeue(&rear,queue,&front);break;
		case 3: Peep(front, rear, queue);break;
		case 4: Display(front, rear,queue);break;
		case 5: exit(0);
		default :break;
	}
	
	main();
}
int Enqueue(int *rear,int queue[])
{
	if(*rear==MAX)
		printf("queue is overflow");
	else
	{	
		int element;
		printf("Enter the element :");
		scanf("%d",&element);
		queue[*rear]=element;
		*rear=*rear+1;
	}
}
int Dequeue(int *rear,int queue[], int *front)
{
	if(*rear==0)
		printf("queue is underflow");
	else if(*front==*rear)
			*front=*rear=0;
	else{
		printf("The deleted element is :%d\n",queue[*front]);
		*front=*front+1;
		}
}
int Peep(int front, int rear, int queue[])
{
	if(rear==0)
		printf("The queue is underflow");
	else
		printf("The front element is %d",queue[front]);
}
int Display(int front ,int rear, int queue[])
{
	if(rear==0)
		printf("The queue is empty");
	else
	{
		int i;
		printf("The elements in the list is :");
		for(i=front;i<rear;i++)
			printf("%d,",queue[i]);
	}
}
