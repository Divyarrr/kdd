#include<stdio.h>
void main()
{
int n,a[100],i,c=0,d=0,k,m;
scanf("%d ",&n);
for(i=0;i<n;i++)
{
scanf("%d ",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]%2==0)
{
 c++;
k=a[i];
}
else 
{
d++;
m=a[i];
}
}
if(c==1)
{
printf("%d",k);
}
else 
{
printf("%d ",m);
}
}
