#include<stdio.h>
void main()
{
char a[100];
int n,i,k=0,j;
scanf("%s",a);
for (i=0;a[i]!='\0';i++)
{
for(j=i+1;a[j]!='\0';j++)
{
if(a[i]==a[j])
{
k=1;
}
}
}
if(k==1)
{
printf("y");
}
else 
{
printf("n");
}
}
