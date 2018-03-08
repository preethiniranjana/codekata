#include <stdio.h>
#include<string.h>
int main(void) 
{
	char s[50];
	int i;
	scanf("%[^\n]s",s);
	for(i=0;i<strlen(s);i++)
	{
		if(s[0]>='a'&&s[0]<='z')
		{
			s[0]-=32;
		}
	if(s[i]==' ' && s[i]>='a' && s[i]<='z')
	{
		s[i+1]-=32;
	}
	}
	for(i=0;i<strlen(s);i++)
	{
		printf("%c",s[i]);
	}
	return 0;
}
