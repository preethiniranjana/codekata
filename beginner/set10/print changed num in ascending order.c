#include <stdio.h>

int main(void) 
{
int n,a[10],i,flag=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d ",&a[i]);
}
for(i=0;i<n;i++)
{
  if(a[i]!=a[i+1]-1)
  {
  	flag=1;
  break;	
  }
}
	if(flag==1)
{
	a[i+1]=a[i]+1;
printf("%d",a[i+1]);	
}
	return 0;
}
