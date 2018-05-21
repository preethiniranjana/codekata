#include <stdio.h>

int main(void)
{
int n,i,a[1000],j,count=0,temp;
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(a[i]==a[j])
		{
		temp=a[i];
		count++;
		if(count==1)
		{
			printf("%d",temp);
		}
		}		
	}	
}
if(count==0)
		{
			printf("unique");
		}
	return 0;
}
