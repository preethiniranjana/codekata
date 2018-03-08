#include <stdio.h>
int main(void) 
{
	int i,n[10],small;
	for(i=0;i<10;i++)
	{
	scanf("%d ",&n[i]);	
	}
	small=n[0];
	for(i=1;i<10;i++)
	{
	if(small>n[i])
	{
	small=n[i];
	}
	}
	printf("%d",small);
	return 0;
}
