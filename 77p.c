#include<stdio.h>
void main()
{
int n,a[100],k,i,c=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
k=a[0];
for(i=0;i<n;i++)
{
if(a[i]>k)
{
k=a[i];
c++;
}
}
printf("%d",c);
