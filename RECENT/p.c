#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Node
{
   int data;
   struct Node *next;
};
struct Node *front = NULL,*rear = NULL;
int main()
{
    int option, element;
    while(1)
    {
        printf("\n1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Peep\n");
        printf("5. Exit\n");
        printf("Enter your option: ");
        scanf("%d",&option);
        switch(option)
        {
         case 1:
                printf("Insert the value you want to enter: ");
                scanf("%d", &element);
                EnQueue(element);
                break;
         case 2:
                DeQueue();
                break;
         case 3:
                display();
                break;
         case 4:
                Front();
                break;
         case 5:
                exit(0);
         default:
                printf("\nInvalid Selection!!..Select valid number please!!\n");
        };
    }
   return 0;
}
int EnQueue(int value)
{
    struct Node *newNode;
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode -> data = value;
    newNode -> next = NULL;
    if(front == NULL)
        front = rear = newNode;
    else
    {
        rear -> next = newNode;
        rear = newNode;
    }
}
int DeQueue()
{
    if(front == NULL)
        printf("\n Queue is Empty!!!\n");
    else
    {
        struct Node *temp = front;
        front = front -> next;
        printf("\n Deleted element is: %d\n", temp->data);
        free(temp);
    }
}
int display()
{
    if(front == NULL)
        printf("\n Queue is Empty!!!\n");
    else
    {
        struct Node *temp = front;
        while(temp->next != NULL)
        {
            printf("%d,",temp->data);
            temp = temp -> next;
        }
        printf("%d",temp->data);
   }
}
int Front()
{
    if(front==NULL)
        printf("\n Queue is Empty!!!\n");
    else
        printf("\n Data at front of the queue is %d \n",front->data);
}
