#include <stdio.h>

int main(void) 
{
int n,temp,sum=0;
scanf("%d",&n);
while(n>0)
{
	temp=n%10;
	printf("%d ",temp);
	n=n/10;
}
	return 0;
}
