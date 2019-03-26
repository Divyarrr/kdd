#include<stdio.h>
void main()
{
int d,r,b=0,m[100],k=0,i=1,l=0;
scanf("%d",&d);
while(d)
{
r=d%2;
d=d/2;
b=b+(i*r);
m[k]=b;
k++;
i=i*10;
}
for(i=0;i<k;i++)
{
l++;
}
printf("%d",l);
}
