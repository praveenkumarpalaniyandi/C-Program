#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
    int data;
    struct node *next;
}*top;

void push(char *word)
{
    struct node *newnode;
    newnode = malloc(sizeof(struct node));
    newnode->data = word;
    newnode->next = NULL;
    if (top == NULL)
    {
        top = newnode;
    }
    else
    {
        newnode->next = top;
        top = newnode;
    }
}
void display()
{
    struct node *temp = top;
    while (temp != NULL)
    {
        printf("%s ", temp->data);
        temp = temp->next;
    }
}


void main()
{
    char str[50];
    //scanf("%[^\n]*c",&str);
    gets(str);
    char *word;
    word=strtok(str," ");
    while(word!=NULL)
    {
        push(word);
        word=strtok(NULL," ");
    }
    display();
}
