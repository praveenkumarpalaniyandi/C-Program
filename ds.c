/*-----Node Declaration----*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
}*head=NULL,*temp;

void insert()
{
    struct node * newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
     printf("enter new data :");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
}
void main()
{
    //head=NULL;
    int choice=1;
    while(choice)
    {
    struct node * newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter data :");
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
        temp=newnode;
    }
    printf("enter choice(0,1) :");
    scanf("%d",&choice);
    }
    insert();
    display();
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


