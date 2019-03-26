#include <stdio.h>
void main()
{
    int n,k,a[1000],i,m=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            m=1;
            break;
        }
    }
    if(m==0)
    {
        printf("no");
    }
    else
    {
        printf("yes");
    }
    
}
