#include<stdio.h>
#include<conio.h>
int main()
{
   char k[100],b[100];
   int i,j=0,c;
   gets(k);
    for(i=0;k[i]!='\0';i++)
    {
        if(k[i]!=' ')
        {
            b[j]=k[i];
            j++;
        }
        if(k[i]==' ')
        {
            for(c=j-1;c>=0;c--)
            {
                printf("%c",b[c]);
                b[c]='\0';
            }
            printf(" ");
            j=0;
        }
            
    }
        
}
