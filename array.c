#include<stdio.h>
int main()
{
int n,i;
char str[50];
printf("enter the no:");
gets(str);
int length=strrev(str);
printf("%d",length);
return 0;
}
