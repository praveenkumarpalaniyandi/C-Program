#include<stdio.h>
void main()
{
    int a[100],b[100],n,m,x;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    scanf("%d",&x);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i]+b[j]==x)
            {
                printf("%d %d\n",a[i],b[j]);
            }
        }
    }


}
