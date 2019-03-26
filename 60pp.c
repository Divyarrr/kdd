#include<stdio.h>
#include<string.h>
void main()
{
 char e[100],b[100];
 int i,c=0,d=0,m;
 gets(e);
 gets(b);
 for (i=0;e[i]!='\0';i++)
 {
 c++;
 }
 for(i=0;b[i]!='\0';i++)
 {
 d++;
 }
 if(c>d)
 {
 m=c;
 }
 else if(c<d)
 {
 m=d;
 }
 else if (c==d)
 {
 m=d;
 }
 for(i=0;i<m;i++)
 {
 if(e[i]==b[i])
 {
 c=1;
 }
 }
 if(c!=1)
 {
 printf("no");
 }
 else if(c==1)
 {
 printf("yes");
 }
 }
