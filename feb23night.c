#include<stdio.h>
#include<stdlib.h>

void insert(int);
void deletion();

struct node
{
    int data;
    struct node*next;
    struct node*prev;
}*temp;

struct node*head;
void main()
{
    int option,item;
    do
    {
        printf("1.create\n");
        printf("2.delete\n");
        printf("3.exit\n");
        printf("\nEnter your choice:");
        scanf("\n%d",&option);

         switch(option)
        {
            case 1:
                printf("\n Enter the item\n");
                scanf("%d",&item);
                create(item);
                   break;
            case 2:deletion();
            break;
            case 3:exit(0);
            break;

        }
    }while(option!=3);
}


void create(int item)
{
    struct node * newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("\nOVERFLOW\n");
    }
    else
    {
        if(head==NULL)
        {
            newnode->next=NULL;
            newnode->prev=NULL;
            newnode->data=item;
            head=newnode;
        }
        else
        {
            newnode->data=item;
            printf("\n press 0 to insert\n");
            newnode->prev=NULL;
            newnode->next=NULL;
            head->prev=newnode;
            head=newnode;
        }
        printf("\n Node inserted\n");
    }

}

void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}


void deletion()
{
    struct node*newnode;
    if(head==NULL)
    {
        printf("\n UNDERFLOW\n");
    }
    else if(head->next==NULL)
    {
        head=NULL;
        free(head);
        printf("\n Node Deleted\n");
    }
    else
    {
        newnode=head;
        head=head->next;
        head->prev=NULL;
        free(newnode);
        printf("\n Node Deleted");
    }
}

