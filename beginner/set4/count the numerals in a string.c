#include <stdio.h>
#include<string.h>
int main(void)
{
	char s[400];
	int i;
	scanf("%[^\n]s",s);
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]>='0'&&s[i]<='9')
		count++;
	}
	printf("%d",count);
	return 0;
}
