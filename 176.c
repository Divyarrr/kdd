#include <stdio.h>
void main()
{
    char a[100],b[100],i,j,m,k=0;
    scanf("%s %s",a,b);
    for(m=0;b[m]!='\0';m++)
    for(i=0;a[i]!='\0';i++)
    {
        for(j=0;b[j]!='\0';j++)
        {
            if(a[i]==b[j])
            {
                k++;
                b[j]='&';
            }
        }
    }
    if(k==m)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
}
