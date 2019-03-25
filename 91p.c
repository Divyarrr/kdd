#include<stdio.h>
void main()
{
int d,b,h,i=1;
scanf("%d",&d);
while (d)
{
h=d%2;
d=d/2;
b=b+(i*h);
i=i*10;
}
printf("%d",b);
}
