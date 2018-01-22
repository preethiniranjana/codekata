#include<stdio.h>
#include<string.h>
int main(void)
{
char s[100];
int i,j,n,flag=0;
scanf("%s",s);
n=strlen(s);
for(i=0;i<n;i++)
{
for(j=n-1;j>=0;j++)
{
	if(s[i]==s[j])
	{
	flag=1;
	}
	else
	flag=0;
}
}
if(flag==1)
{
	printf("yes");
}
else
{
	printf("no");
}
return 0;
}
