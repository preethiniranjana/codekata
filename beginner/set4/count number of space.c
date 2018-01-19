#include<stdio.h>
#include<string.h>
int main()
{
	char s[500];
	int count=0,len,i;
	scanf("%[^\n]s",s);
	len=strlen(s);
	for(i=0;i<=len;i++)
	{
		if(s[i]==' ')
		count++;
	}
	printf("%d",count);
	return 0;
}
