#include<stdio.h>
void main()
{
int n,k,i,s,c=1,d=1,m;
scanf("%d %d",&n,&k);
for(i=1;i<=n;i++)
{
c=c*i;
}
s  =n-k;
for(i=1;i<=s;i++)
{
d=d*i;
}
m=c/d;
printf("%d",m)
