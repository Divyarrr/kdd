#include<stdio.h>
void main()
{
int i,a[100],m=0,k=0,b[100],j,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
m=0;
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
b[k]=a[i];
k++;
m++;
a[j]='\0';
}
if(m!=0)
{
a[i]='\0';
}
}
}
for(i=0;i<k;i++)
{
if(b[i]!='\0')
printf("%d ",b[i]);
}
}
