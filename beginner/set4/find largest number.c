#include <stdio.h>

int main(void)
{
	int a[300],n,i,lar;
	scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
lar=a[0];
for(i=0;i<n;i++)
{
if(lar<a[i])
{
lar=a[i];
}
}
	printf("%d",lar);
	return 0;
}
