#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node*next,*prev;
}*head=NULL,*temp,*newnode,*nextnode,*tail;

void create()
{
    struct node * newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
     printf("enter new data :");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    newnode->prev=NULL;
    head=newnode;
    tail=head;

   /* if(head==NULL)
    {
        head=newnode;
        temp=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=newnode;
    }*/
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

void insertfront()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter new data :");
    scanf("%d",&newnode->data);
    //temp=head;
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}

void insertend()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter new data :");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    newnode->prev=NULL;
    //tail->next=newnode;
    newnode->prev=tail;
    tail->next=newnode;
}

void insertmiddle()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&newnode->data);

    int pos;
    printf("Enter position:");
    scanf("%d",&pos);
    temp=head;
    for(int i=0;i<pos;i++)
    {
        temp->prev->next=newnode;
    }
        newnode->prev=temp->prev;
        newnode->next=temp;
        temp->prev=newnode;
}

void deletefront()
{

}
void deleteend()
{

}


void main()
{
    int option;
    while(1)
    {
        printf("\n 1.create\n");
        printf("2.display\n");
        printf("3.Insert at front\n");
        printf("4.Insert at end\n");
        printf("5.Insert at middle\n");
        printf("6.Deletion at front\n");
        printf("7.deletion at end\n");
        printf("8.exit\n");
        printf("\nEnter your choice(1,2,3,4,5,7,8):");
        scanf("\n%d",&option);
        switch(option)
        {
            case 1:create();
                   break;
            case 2:display();
                break;
            case 3:insertfront();
            break;
            case 4:insertend();
            break;
            case 5:insertmiddle();
            break;
            case 6:deletefront();
            break;
            case 7:deleteend();
            break;

        }
    }
}
