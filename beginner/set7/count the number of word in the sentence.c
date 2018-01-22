#include <stdio.h>
#include<string.h>
int main(void)
{
char s[100],p=1;
int i,flag=0,len;
scanf("%[^\n]s",s);
len=strlen(s);
for(i=0;i<len;i++)
{
if(s[i]==' ')
p=p+1;
}
printf("%d",p);
	return 0;
}
