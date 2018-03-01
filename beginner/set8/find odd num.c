#include <stdio.h>
int main(void)
{
int n,b;
scanf("%d",&n);
while(n!=0)
{
	b=n%10;
	if(b%2!=0)
	{
		printf("%d ",b);
	}
	n=n/10;
	
}
	return 0;
}
