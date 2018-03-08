#include <stdio.h>
int main(void) 
{
	int i,n,k,a[50],temp;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]>a[i+1])
		{
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
		}
	}
	for(i=0;i<n;i++)
	{
		if(i==k-1)
		{
			printf("%d",a[i]);
		}
	}
			
	return 0;
}
