#include <stdio.h>

int main(void) 
{
int n,k,a[1000],s,i;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
	scanf("%d ",&a[i]);
}
for(i=0;i<n;i++)
{
	for(int j=i+1;j<n;j++)
	{
	if(a[i]<a[j])
	{
	s=a[i];
	a[i]=a[j];
	a[j]=s;
	}
}
}
printf("%d",a[k-1]);
	return 0;
}
