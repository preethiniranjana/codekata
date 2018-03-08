#include <stdio.h>

int main(void)

{
	int n,m,ans=1;
	scanf("%d %d",&n,&m);
	while(m!=0)
	{
	ans*=n;	
	m--;	
	}
	printf("%d",ans);
	return 0;
}
