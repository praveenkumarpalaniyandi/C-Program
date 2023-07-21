/*------queue using Array------*/

#include<stdio.h>
#define max 50

void main()
{
    int arr[max];
    int front=0;
    int rear=-1;

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
            {
                if(rear==-1)
                {
                    rear++;
                    printf("\nEnter Element :");
                    scanf("%d",&arr[rear]);
                }
                else
                {
                    rear++;
                    printf("\nEnter Element :");
                    scanf("%d",&arr[rear]);
                }
            }
            break;
         case 2:
            {
                printf("\nDeleted Element :%d",arr[front]);
                front++;
            }
            break;
         case 3:
            {
                printf("\nThe Firts Element is :%d",arr[front]);

            }
            break;
         case 4:
            {
                for(int i=front;i<=rear;i++)
                {
                    printf("\nElements :%d",arr[i]);
                }
            }
            break;
         case 5:
            {
                printf("\nThe Last Element is :%d",arr[rear]);
            }
         }
    }
}
