#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};
struct node *temp=NULL,*head=NULL,*tail=NULL;
int main()
{
    int choice;
    for(;;)
    {
    printf("\n1.Enqueue");
    printf("\n2.Dequeue");
    printf("\n3.First");
    printf("\n4.Display");
    printf("\n5.Last");
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            for(;;)
            {
        if(head==NULL)
        {
        struct node* newn;
        newn=(struct node *)malloc(sizeof(struct node));
        printf("\nEnter a element:");
        scanf("%d",&newn->data);
        if(newn->data >0)
        {
        newn->next=NULL;
        head=newn;
        tail=head;
        }
        else if(newn->data < 0)
        {
            break;
        }
        }
        else
        {
        struct node* newn;
        newn=(struct node *)malloc(sizeof(struct node));
        printf("\nEnter a element:");
        scanf("%d",&newn->data);
        if(newn->data > 0)
        {
        newn->next=NULL;
        tail->next=newn;
        tail=newn;
        }
        else if(newn->data < 0)
        {
            break;
        }

        }
            }
        break;
        case 2:
        {
            temp=head;
            printf("\nThe element deleted is:%d",temp->data);
            head=temp->next;
        }
        break;
        case 3:
        {
            printf("\nThe First element is:%d",head->data);
        }
        break;
        case 5:
            {
                printf("\nThe Last Element is:%d",tail->data);
            }
            break;
        case 4:
        {
            temp=head;
            while(temp!=NULL)
            {
                printf("\nThe values are:%d",temp->data);
                temp=temp->next;
            }
        }
        break;

    }
    }
    return 0;
}
