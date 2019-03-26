#include <stdio.h>
void main()
{
    char a[100000];
    int i,c,flag=0;
    scanf("%[^\n]s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!=' ')
        {
            c++;
        }
    }
    for(i=2;i<c;i++)
    {
       if(c%i==0)
       {
           flag=1;
           printf("n");
           break;
       }
    }
    if(flag==0)
    {
        printf("ys");
    }

}
