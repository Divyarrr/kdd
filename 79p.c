#include<stdio.h>
void main()
{
int a[100],n,i,j,k=0,b[100],g,m;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for (i=0;i<n;i++)
{
g=0;
for(j=i;j<n;j++)
{
if(a[i]>a[j])
{
g=a[i]-a[j];
}
else 
{
g=a[j]-a[i];
}
  b[k]=g;
k++;
}
}
for(i=0;i<k;i++)
{
if(b[i]>m)
{
m=b[i];
}
}
printf("%d ",m);
}
