#include<stdio.h>
void main()
{
int n,a[100],i,d;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for (i=n-1;i>=0;i--)
{
if(a[i]==0)
{
d=i;
break;
}
}
for(i=d-1;i>=0;i--)
{
if(a[i]!=0)
{
printf("%d ",a[i]);
}
}
}
