#include <stdio.h>

int main(void)
{
int N,i;
scanf("%d",&N);
char a[10];
for(i=0;i<N;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<N;i++)
{
	printf("%d %d\n",a[i],i);
}
	return 0;
}
