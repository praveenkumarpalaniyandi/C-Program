#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
}*temp;

void create()
{
    struct node * newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
        temp=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=temp->next;
        temp->next=head;
    }
}

void reverse()
{

}

