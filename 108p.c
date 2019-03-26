#include<stdio.h>
void main()
{
int n,a[100],i,m=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
m=m+a[i];
printf("%d ",m);
}
}
