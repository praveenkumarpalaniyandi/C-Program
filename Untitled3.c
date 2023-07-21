#include<stdio.h>
int main(){
int n,a[50],x;
scanf("%d",&n);
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
scanf("%d",&x);
for(int i=0;i<n;i++){
for(int j=i+1;j<n;j++){
if(a[i]>a[j]){
int b=a[i];
a[i]=a[j];
a[j]=b;
}
}
}
printf("%d",a[x-1]);
}
