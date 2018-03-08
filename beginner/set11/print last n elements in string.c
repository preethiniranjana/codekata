#include <stdio.h>
#include<string.h>
int main(void)
{
	char s[10];
	int n,i,l,d;
	scanf("%s %d",s,&n);
	l=strlen(s);
	d=l-n;
	for(i=d;i<l;i++)
	{
		printf("%c",s[i]);
		}
	return 0;
}
