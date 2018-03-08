#include <stdio.h>
int main()
{
	int s,i,c=0;
	scanf("%d",&s);
	for(i=1;i<=26;i++)
	{
		if(s==i)
		{
	             s=c+'A';
		}
		c++;
	}
	printf("%c",s);
	return 0;
}
