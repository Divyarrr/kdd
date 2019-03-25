#include<stdio.h>
void main()
{
int b,h,i=1,r;
scanf("%d",&b);
while (b)
{
r=b%10;
b=b/10;
h=h+(i*r);
i=i*2;
}
printf("%d",h);
}
