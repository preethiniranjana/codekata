#include <stdio.h>
#include<string.h>
int main(void)
{
	char s[100];
	int len;
	scanf("%[^\n]s",s);
	len=strlen(s);
	for(int i=0;i<len;i++)
	{
		if(s[i]>=65 && s[i]<=90)
		{
			s[i]=s[i]+32;
		}
	}
            for(int i=0;i<len;i++)
	{
		if(i==0)
		{
			s[i]=(s[i]-32);
		}
		if(s[i]==' ')
		{
			s[i+1]=(s[i+1]-32);
		}
	}
	for(int i=0;i<len;i++)
	{
		printf("%c",s[i]);
	}
	return 0;
}
