#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};
struct node * head,*temp;
void main()
{
    struct node * newn;
    newn=(struct node *)malloc(sizeof(struct node));
    scanf("%d",&newn->data);
    newn->next=
}
