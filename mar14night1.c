#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head=NULL,*tail;




void insert(int data)
{
    struct node *newn;
    newn=(struct node *)malloc(sizeof(struct node));
    newn->data=data;
    newn->next=NULL;
    if(head==NULL)
    {
        head=newn;
        tail=newn;
    }
    else
    {
        tail->next=newn;
        tail=newn;
    }
}


void display()
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}

void move()
{
    struct node *newn;
    newn=(struct node *)malloc(sizeof(struct node));
    newn->data=tail->data;
    newn->next=head;
    head=newn;
    struct node *head;
    if(head ==NULL || head->next ==NULL)
        return head;
    struct node *last2=NULL;
    struct node *last=NULL;
    while(last->next != NULL)
    {
        last2=last;
        last=last->next;
    }
    last2->next=NULL;
    last->next=head;
    head=last;
    return head;
}

void main()
{
     int choice;
    int data;
    int pos;
    while (1)
    {
        printf("1.Insert\n2.Display\n3.move\n4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\n");
            printf("Enter data to insert: ");
            scanf("%d", &data);
            insert(data);
            printf("\n");
            break;
        case 2:
            printf("\n");
            display();
            printf("\n");
            break;
        case 3:
            printf("\n");
            move();
            break;
        }
    }
}
