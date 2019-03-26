    
#include<stdio.h>
#include<string.h>
void main()
{
    char a[1000],b[100],temp;
    int i,j,l,d=0,m;
    gets(a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]!=' ')
        {
            b[d]=a[i];
            d++;
        }
        if(a[i]==' ')
        {
            for(j=0;j<d;j++)
            {
                for(m=j+1;m<d;m++)
                {
                    if(b[j]>b[m])
                    {
                         temp=b[j];
                        b[j]=b[m];
                        b[m]=temp;
                    }
                }
            }
            printf("%s ",b);
            for(j=0;j<d;j++)
            {
                b[j]='\0';
            }
            k=0;
        }
    }
        for(j=0;j<d;j++)
            {
                for(m=j+1;m<d;m++)
                {
                    if(b[j]>b[m])
                    {
                         temp=b[j];
                        b[j]=b[m];
                        b[m]=temp;
                    }
                }
            }
        
            printf("%s   ",b);
