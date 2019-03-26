#include<stdio.h>
#include<string.h>
void main()
{
  char a[100],k;
int i,c=0;
gets(a);
scanf("%c",&k);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==k)
{
c++;
}
}
printf("%d",c);
}
