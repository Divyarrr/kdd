#include<stdio.h>
void main()
{
	char a[200],s1[200];
	int c,d,e=0,f,g,h,i,j=0,k;
	gets(a);
	gets(s1);
	c=strlen(a);
	d=strlen(s1);
	for(i=0;i<c;i++)
	{
		if(a[i]==s1[j])
		{
			a[i]='\0';
			j++;
			e++;
		}
	}
	for(i=0;i<e;i++)
	{
		if(a[i]!='\0')
		printf("%c",s[i]);
	}
}
