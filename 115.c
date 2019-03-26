#include<stdio.h>
void main()
{
char a[100],b[100];
int i,c=0,d=0,k;
scanf("%s",a);
scanf("%s",b);
for(i=0;a[i]!='\0';i++)
{
c++;
}
for(i=0;b[i]!='\0';i++)
{
d++;
}
if(c>=d)
{
k=d;
}
else if(c<d)
{
k=c;
}
for(i=0;a[i]!='\0';i++)
{
if(i<k)
{
printf("%c",a[i]);
}
}
for(i=0;b[i]!='\0';i++)
{
if(i<k)
{
printf("%c",b[i]);
}
}
}
