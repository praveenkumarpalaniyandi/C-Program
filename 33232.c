#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
    struct node *child;
}*temp,*tail,*prev,*temp1,*child=NULL;
void pri(struct node *tempp)
            {
            while(tempp!=NULL)
            {
                printf("%d ",tempp->data);
                if(tempp->child!=NULL)
                {
                    pri(tempp->child);
                }
                tempp=tempp->next;
            }
            }
struct node *create(int arr[],int size)
{
    //int ele;
    struct node *head=NULL;
    int ele;
    int count=0;
    for(int i=0;i<size;i++)
    {
             struct node*new=(struct node*)malloc(sizeof(struct node));
            //printf("\nEnter your data:");
            //scanf("%d",&ele);
            new->data=arr[i];//=ele;
            if(head==NULL)
            {
                new->next=NULL;
                head=new;
                tail=head;
                prev=NULL;
                count++;
            }
            else
            {
                new->prev=tail;
                tail->next=new;
                new->next=NULL;
                tail=new;
                count++;
            }
    }
    return head;
}
void main()
{
    int ch;
    int arr1[]={1,2,3,4,5,6};
    int arr2[]={7,8,9,10};
    int arr3[]={11,12};
    for(;;)
    {
        printf("\n1.Insert");
        printf("\n2.Display1");
        printf("\n3.Display2");
        printf("\n4.Display3");
        printf("\n5.Reverse Order");
        printf("\n6.Ans");
        //printf("\n4.Count The Number of Elements:");
	     //printf("\n5.Desc");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            struct node *head1=create(arr1,6);
            struct node *head2=create(arr2,4);
            struct node *head3=create(arr3,2);
            break;
            case 2:
            temp=head1;
            while(temp!=NULL)
            {
                printf("\nThe Elements:%d",temp->data);
                temp=temp->next;
            }
            break;
            case 5:
            temp1=tail;
            while(temp1!=NULL)
            {
                printf("\nThe Elements:%d",temp1->data);
                temp1=temp1->prev;
            }
            break;
            case 3:
            temp=head2;
            while(temp!=NULL)
            {
                printf("\nThe Elements:%d",temp->data);
                temp=temp->next;
            }
            break;
            case 4:
            temp=head3;
            while(temp!=NULL)
            {
                printf("\nThe Elements:%d",temp->data);
                temp=temp->next;
            }
            break;
            case 6:
            head1->next->next->child=head2;
            head2->next->child=head3;
            pri(head1);
            break;
        }
    }
    return;
}
