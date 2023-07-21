#include<stdio.h>
#include<stdlib.h>

void main()
{
    char s1[10],s2[10];
   // scanf("%s",&s1);
   // scanf("%s",&s2);
   printf("great");
     char * token = strtok(s1, " ");
   printf( " %s\n", token );

    printf("%s",s1);
    printf("\n%s",s2);
}
