#include <stdio.h>

int main(void) 
{
	int x,y,z,sa,v;
	scanf("%d %d %d",&x,&y,&z);
	sa=2*((x*y)+(y*z)+(x*z));
	v=x*y*z;
	printf("%d",v);
	return 0;
}
