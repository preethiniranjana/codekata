#include <stdio.h>
int main(void)
{
int t,i,m,n;
scanf("%d",&t);
for(i=0;i<t;i++)
{
	scanf("%d %d",&m,&n);
	printf("%d\n",abs(m-n));
}
	return 0;
}
