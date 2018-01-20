#include <stdio.h>
#include<string.h>
int main(void) 
{
char s[100];
int i,flag=0,flag1=0,t;
scanf("%s",s);
for(i=0;i<strlen(s);i++)
{
	if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
	{
		flag=1;
	}
	if((s[i]>='0'&&s[i]<='9'))
	{
	flag1=1;
}
	
}
t=flag+flag1;
if(t==2)
{
printf("yes");
}
else
printf("no");
	return 0;
}
