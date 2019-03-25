#include<stdio.h>
void main()
{
int b,d=0,o=0,r,i=1,i1=1,r1;
scanf("%d",&b);
while(b)
{
r=b%10;
b=b/10;
d=d+(i*r);
i=i*2;
}
while(d)
{
 r1=d%8;
  d=d/8;
o=o+(i1*r1);
i1=i1*10;
}
printf("%d",o);
}
