#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
}*head;
void main()
{
    int choice=1;
    while(choice)
    {
        struct node * new1;
        new1=(struct node *)malloc(sizeof(struct node));
        printf("Enter data :");
        scanf("%d",&new1->data);
    }

    insert();
    display();
}

/*-----------Display----------*/

void display()
{
    new1=head;

    while(new1!==NULL)
    {
        printf("%d",new1->data);
        new1=new1->next;
    }
}

/*-----Insertion at the beginning-------*/
void insert()
{
struct node * newn;
newn=(struct node *)malloc(sizeof(struct node));
printf("Enter Your Data :");
scanf("%d",&newn->data);
newn->next=NULL;
head=newn;
}




