#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
    struct node * prev;
};

struct node * head,*tail,*child;

struct node * create(int arr[],int n)
