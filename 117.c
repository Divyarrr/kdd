#include<stdio.h>
void main()
{
char b[100];
int i,n=0;
scanf("%s",b);
for(i=0;b[i]!='\0';i++)
{
n++;
}
for(i=n-1;b[i]!='\0';i--)
{
if(i!=0)
{
printf("%c-",b[i]);
}
else if(i==0)
{
printf("%c",b[i]);
}
}
}
