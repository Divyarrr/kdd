
#include<stdio.h>
void main()
{
int o,b=0,i=1,r,p=1,c=0,z,a[100],h,g=0,m,d=0;
scanf("%d  ",&o);
while(o)
{
r=o%2;
o=o/2;
b=b+(i*r);
i=i*10;
}
h=b;
while(b)
{
b=b/10;
c++;
}
z=c-1;
while(z)
{
p=p*10;
z--;
}
while(h)
{
m=h/p;
h=h%p;
a[g]=m;
g++;
p=p/10;
}
for(i=0;i<g;i++)
{
if(a[i]==1)
{
d++;
}
}
printf("%  d",d);
}
