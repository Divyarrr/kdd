#include<stdio.h>
void main()
{
    int n,i,a[100],m,c=0,j;
    scanf("%d ",&n);
    for(i=0;i<n;i++)
    {
        scanf("% d",&a[i]);
    }
    m=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>m)
        {
            m=a[i];
        }
    }
    for(i=m;i<=100;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(i%a[j]==0)
            {
                c++;
            }
        }
        if(c==n)
        {
            printf("%d  ",i);
            break;
        }
    }
}
