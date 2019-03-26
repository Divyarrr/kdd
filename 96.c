#include <stdio.h>

int main()
{
    int n,rem,s,p;
    scanf("%d",&n);
        rem=n%10;
        n=n/10;
        while(n>0)
        {
          p=n%10;
          n=n/10;
        }
        s=rem+p;

    
    printf("%d",s);

    return 0;
}
