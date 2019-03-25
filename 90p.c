#include<stdio.h>
void main()
{
int n,k,s=0,c=1,d=1,k=1,m,i,g;
scanf("%d   %d",&n ,&k);
s=n-k;
for(i=1;i<=n;i++)
{
c=c*i;
}
for(i=1;i<=k;i++)
{
d=d*i;
}
for (i=1;i<=s;i++)
{
k=k*i;
}
g=d*k;
m=c/g;
printf("%d",m);
}   
