#include<stdio.h>
#include<conio.h>

struct node
{
    int data;
    struct node*next;
    struct node*prev;
}*temp;

struct node* head;

void insert(int item)
{
   struct node*newnode;
   newnode=(struct node*)malloc(sizeof(struct node));

   if(newnode==NULL)
   {
       printf("\nOVERFLOW");
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
       newnode->prev=NULL;
       newnode->next=head;
       head->prev=newnode;
       head=newnode;
   }
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

void main()
{
    int item;
    int option=1;
    while(option)
    {
        printf("\nEnter your data\n");
        scanf("\n%d",&item);
        insert(item);
        printf("\nPress 0 to insert more ?\n");
        scanf("%d",&option);
        switch(option)
        {
            case 1:display();
            break;
        }
    }
}



