#include <stdio.h>
void main()
{
   int a,b,m,bin=0,rem,rem2,power=1,c=0;
   scanf("%d %d",&a,&b);
   m=a^b;
   while(mul>0)
   {
       rem=m%2;
       bin=bin+rem*power;
       m=m/2;
       power=power*10;
   }
   while(bin>0)
   {
       rem2=bin%10;
       if(rem2==1)
       {
           c++;
       }
       bin=bin/10;
   }
   printf("%d",c);
}
