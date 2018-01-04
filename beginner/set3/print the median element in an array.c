#include <stdio.h>

int main(void)
{
  int n,temp,i,j,a[30];
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
  	scanf("%d ",&a[i]);
  }
  for(i=0;i<n;i++)
  {
  	for(j=0;j<n-1;j++)
  	{
  		if(a[j]>a[j+1])
  		{
  			temp=a[j];
  			a[j]=a[j+1];
  			a[j+1]=temp;
  		}
  	}
  }
  n=((n+1)/2)-1;
  printf("%d",a[n]);
	return 0;
}
