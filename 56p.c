#include<stdio.h>
#include<string.h>
void main()
{
char a[100],n;
int i;
gets(a);
scanf("%c",&n);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==n)
{
printf("%d",i+1);
break;
}
}
}
