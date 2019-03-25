#include<stdio.h>
void main()
{
int a[100],n,i,d;
scanf("%d",&n);
d=n;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]<d)
{
printf("%d ",a[i]);
}
}
}
