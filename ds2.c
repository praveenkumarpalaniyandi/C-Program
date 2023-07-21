#include<stdio.h>
#include<stdlib.h>

struct node
{
    float data;
    struct node*next;
};

void main()
{
    struct node * newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter data :");
    scanf("%f",&newnode->data);
    printf("your data is :%f",newnode->data);
}
