#include<stdio.h>
void main()
{
    int a[100],b[100],n,i,j,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        m=0;
        for(j=0;j<n;j++)
        {
           if(a[i]==b[j])
           {
               m++;
           }
        if(m!=0)
        {
       printf("%d ",a[i]);
       break;
        }
        }
   }
}
