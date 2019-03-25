#include<stdio.h>
void main()
{
int a[100],n,k,i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
k=a[0];
for(i=1;i<n;i++)
{
k=k^a[i];
}
printf("%d",k);
}
