#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int main()
{
	static int queue[MAX],option,rear=-1,front=-1;
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
		case 1: Enqueue(&front,&rear,queue);break;
		case 2: Dequeue(&front,&rear,queue);break;
		case 3: Peep(front,rear,queue);break;
		case 4: Display(front,rear,queue);break;
		case 5: exit(0);
		default :break;
	}
	main();
}
Enqueue(int *front,int *rear,int queue[])
{
	if(*front==-1)
		*front=*rear=0;
	else if((*rear==MAX&&*front==0)||(*rear==*front)){
		printf("Overflow");
		return 0;
	}
	else if(*front!=0 && *rear==MAX)
		*rear=0;
	int element;
	printf("Enter the element :");
	scanf("%d",&element);
	queue[*rear]=element;
	*rear+=1;		
}
int Dequeue(int *front,int *rear,int queue[])
{
	if(*front==-1){
		printf("underflow");
		*rear=*front=-1;
		return 0;
	}
	else if(*front==MAX)
	*front=0;
	printf("The deleted element is %d",queue[*front]);
	*front+=1;
}
int Peep(int front,int rear, int queue[])
{
	if(front==-1)
		printf("underflow");
	else
		printf("The front element is %d",queue[front]);
}
int Display(int front,int rear,int queue[])
{
	int i;
	if(front==-1){
		printf("underflow");
		return 0;
	}
	else if(rear>front)
	for(i=front;i<rear;i++)
		printf("%d,",queue[i]);
	else{
		for(i=front;i<MAX;i++)
			printf("%d,",queue[i]);
		for(i=0;i<rear;i++)
			printf("%d,",queue[i]);
	}
}
