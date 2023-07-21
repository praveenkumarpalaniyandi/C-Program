#include<stdio.h>
void main()
{
 int n,a[100],j=0;
 scanf("%d",&n);
 for(int i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }
for(int i=0;i<n;i++)
{
    i=i+a[i];
    j++;
}
printf("%d",j);

}
