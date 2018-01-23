#include <stdio.h>

int main(void) 
{
	int n,l,m;
	scanf("%d %d %d",&n,&l,&m);
	if((l<n) && (n<m))
	{
		printf("yes");
	}
	else
	{
	printf("no");
	}
	return 0;
}
