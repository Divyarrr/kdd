#include<stdio.h>
void main()
{
int a[100],n,k,p,i;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
p=n-k;
for(i=0;i<p;i++)
{
printf("%d ",a[i]);
}
}
