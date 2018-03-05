#include <stdio.h>
#include<string.h>
int main(void) 
{
	char a[10];
	int i,l;
	scanf("%s",a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		if(i%2==0)
		{
			printf("%c",a[i]);
		}
	}
	printf(" ");
	for(i=0;i<l;i++)
	{
		if(i%2==1)
		{
			printf("%c",a[i]);
		}
	}	
	return 0;
}
