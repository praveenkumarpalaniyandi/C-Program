#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head,*tail;

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

void insertionfrnd()
{
    struct node *newn;
    newn=(struct node *)malloc(sizeof(struct node));
    scanf("%d",&newn->data);
    newn->next=head;
    head=newn;
}

void insertpos(int pos1,int data)
{
    struct node *nwn;
    nwn=(struct node *)malloc(sizeof(struct node));
    struct node*temp=head;
    for(int i=0;i<pos1-1;i++)
    {
        temp=temp->next;
    }
    printf("%d",temp->data);
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

void delete()
{
    struct node *temp=head;
    while(temp->next!=NULL&&temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    if(temp == head)
    {
        head = NULL;
        tail = NULL;
    }
    else
    {
    temp->next = NULL;
    tail = temp;
    }
}

void deletion(int pos)
{
    if(pos == 0)
    {
        if(head!=NULL)
        {
            head=head->next;
        }
    }
    else
    {
        struct node *temp=head;
        for(int i=0;i<pos-1;i++)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
    }
}

void main()
{
    int choice=1;
    int data;
    int pos;
    int pos1;
    while(choice)
    {
        printf("\n1.Insert\n2.Display\n3.Delete\n4.Deletionpos\n5.Insertfrnd\n6.Inserpos\n7.exit\n");
        printf("Enter your choice :\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
             printf("Enter data :");
             scanf("%d",&data);
             insert(data);
             break;
            case 2:
                printf("\n");
                display();
                printf("\n");
                break;
            case 3:
                printf("\n");
                delete();
                break;
            case 4:
                printf("Enter pos :");
                scanf("%d",&pos);
                deletion(pos);
                break;
            case 5:
                printf("Inser new data :");
                insertionfrnd();
                break;
            case 6:
                printf("Enter position :");
                scanf("%d",&pos1);
                printf("Enter data:");
                scanf("%d",&data);
                insertpos(pos1,data);
                break;
            case 7:
                exit(0);
        }
    }

}
