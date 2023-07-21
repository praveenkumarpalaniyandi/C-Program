#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
};

void insert()
{
    struct node * newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
     printf("enter new data :");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
}

