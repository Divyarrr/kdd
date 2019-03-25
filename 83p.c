#include<stdio.h>
void main()
{
int m[1000],n,i,l=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&m[i]);
}
for(i=0;i<n;i++)
{
l=l|m[i];
}
printf("%d",l);
}
