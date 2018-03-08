#include <stdio.h>
int main(void)

{
	int a,d,n,x,s=0,i,t;
	scanf("%d %d %d",&a,&d,&n);
	t=a+(n-1)*d;
	for(i=a;i<=t;i+=d)
	{
	 x=(n*(2*a+(n-1)*d))/2;	
	}
	printf("%d",x);
	return 0;
}
