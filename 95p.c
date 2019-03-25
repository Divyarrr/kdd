#include<stdio.h>
void main()
{
char a[100];
int n,k,i,c=0;
scanf("%s",a);
scanf("%d %d",&n,&k);
for(i=0;a[i]!='\0';i++)
{
if(i>=n)
{
c++;

if(c==k)
{

printf("%c",a[i]);

}
}
}
}
