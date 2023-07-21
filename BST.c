#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*right,*left;
}*root=NULL;

void append(int n)
{
    int flag=0;
    struct node*newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->left=NULL;
    newnode->rigth=NULL;
    newnode->data=n;
    if(root==NULL)
    {
        root=newnode;
    }
    else
    {
        struct node*temp1=root,*temp2=root;
        while(1)
        {
            if(temp1->left==NULL)
            {
                temp1->left=newnode;
                break;
            }
            else if(temp->right=NULL)
            {
                temp1->right=newnode;
                break;
            }
            else if(flag==0)
            {
                temp1=temp2->left;
                flag=1;
            }
            else
            {
                temp1=temp2->right;
                flag=0;
                temp2=temp2->left;
            }
        }
    }
}
void inorder(struct node*temp1)
{
    if(temp1!=NULL)
    {
        inorder(temp1->left);
        printf("%d",temp->data);
        inorder(temp1->right);
    }
}

void postorder(struct node*temp1)
{
    if(temp1!=NULL)
    {
        postorder(temp1->left);
        postorder(temp1->right);
        printf("%d",temp1->data);
    }
}
void preorder(struct node*temp1)
{
    if(temp1!=NULL)
    {
        printf("%d",temp1->data);
        preore
    }
}


int main()
{
    int n;
    do
    {
        scanf("%d",&n);
        if(n>0)
        {
            append(n);
        }
    }
    while(n>0);
    printf("Inorder: ");
    inorder(root);
    printf("Postorder: ");
    postorder(root);
    printf("Preorder: ");
    preorder(root);
    printf("\n%d",sum(root));
    printf("\n%d",height(root));
    return 0;
}

