#include <stdio.h>

int main(void) 
{
	int i,a[1000],n,count=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	if(i==a[i])
	{
		printf("%d ",a[i]);
		count++;
	}
}
if(count==0)
{
	printf("-1");
}
	return 0;
}
