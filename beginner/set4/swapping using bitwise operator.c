#include <stdio.h>

int main(void)
{
	int x,y,temp;
	scanf("%d %d",&x,&y);
	x=x^y;
	y=x^y;
	x=x^y;
	printf("%d %d",x,y);
	return 0;
}
