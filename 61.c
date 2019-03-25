#include<stdio.h>

int main() {
    int a[100],k,d=0,n,i;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        d=d+a[i];
    }
    if(d==k)
    {
        printf("yes");
    }
    else if(s!=k)
    {
        printf("no");
    }
return 0;
}
