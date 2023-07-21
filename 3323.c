#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next,*prev;
};
struct node * head,*temp,*tail;

struct node *create(int *arr,int n)
{
    int i;
    for(int i=0;i<n;i++)
    {
    struct node * newn;
    newn=(struct node *)malloc(sizeof(struct node));
    newn->next=NULL;
    newn->child=NULL;
    newn->data=arr[i];
    head=newn;
    tail=head;
    if(head==NULL)
    {
        head=newn;
        tail=newn;

    }
    }
}

void main()
{
    int arr1[]={1,2,3,4,5,6};
    int arr2[]={7,8,9,10};
    int arr3[]={11,12};
    for(;;)
    {
        printf("\n1.Insert");
        printf("\n2.Display");
        printf("\n3.Reverse");
    }
}
