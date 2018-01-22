#include <stdio.h>
#include<string.h>
int main(void)
{
char s[100];
int i,flag=0,len;
scanf("%s",s);
len=strlen(s);
for(i=0;i<len;i++)
{
	if((s[i]=='0')||(s[i]=='1'))
	{
	flag=1+flag;
	}
}
if(flag==len)
{
printf("yes");
}
else 
{
printf("no");
}
	return 0;
}
