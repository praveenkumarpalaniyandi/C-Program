#include<stdio.h>
#define max 5

int queue[max];
int front=-1;
int rear=-1;

void enqueue(int ele)
{
    if((front==-1) && (rear==-1))
    {
        front=0;
        rear=0;
        queue[rear]=ele;
    }
    else if((rear+1)%max==front)
    {
        printf("Queue is overflow..");
    }
        else
        {
            rear=(rear+1)%max;
            queue[rear]=ele;
        }
}

void dequeue()
{
    if((front==-1)&&(rear==-1))
    {
        printf("Underflow..");
    }
    else if(front==rear)
    {
        printf("%d",queue[front]);
        front=rear-1;
    }
    else
    {
        printf("%d",queue[front]);
        front=(front+1)%max;
    }
}

void display()
{
    int i=front;
    if(front==-1 && rear==-1)
    {
        printf("empty");
    }
    else
    {
        printf("elements in a queue");
        while(i!=rear)
        {
            printf("%d",queue[i]);
            i=(i+1)%max;
        }
        printf("%d",queue[i]);
    }
}

void main()
{
    int choice=0,x;
    while(1)
    {
    printf("\n1.Enqueue\n2.Dequeue\n3.Display\n");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        printf("Element");
        scanf("%d",&x);
        enqueue(x);
        break;
    case 2:
        dequeue();
        break;
    case 3:
        display();
    }
    }

}

