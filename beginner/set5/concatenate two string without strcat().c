#include<stdio.h>
#include<string.h>

int main()
{
char a[100],b[100];
int i=0,j,len1,len2,len;

scanf("%s %s",a,b);
len1=strlen(a);
len2=strlen(b);
len=len1+len2;
for(i=len1;i<len;)
{
for(j=0;j<len2;j++)
{
a[i]=b[j];
i++;
}
}
for(i=0;i<len;i++)
printf("%c",a[i]);
return 0;
}
