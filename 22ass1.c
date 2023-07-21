#include<stdio.h>
#include<stdlib.h>

int main() {
    int N,sum;
    int arr[30];

    int choice;
    printf("enter your choice(1,0):");
    scanf("%d", &choice);
    while (choice--)
        {
            printf("Enter the length :");
        scanf("%d", &N);
        sum = 0;
        for (int i = 0; i < N; i++)
        {
            printf("Enter Elements :");
            scanf("%d", &arr[i]);
        }
        printf("Enter subset :");
        scanf("%d",&sum);
        }
}

