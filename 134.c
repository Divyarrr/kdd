#include<stdio.h>
void main()
{
int n,l,r,m,a[100],j,i;
scanf("%d %d %d",&n,&l,&r);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
m=l-1;
k=a[m];
for(i=l-1;i<k;i++)
{
if(a[i]<j)
{
j=a[i];
}
}
printf("%d",j);
}
