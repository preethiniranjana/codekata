#include <stdio.h>

int main(void)
{
  int n,i,j,a[1000];
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
  	scanf("%d ",&a[i]);
  }
  for(i=0;i<n;i++)
  {
  	int count=0;
  	for(j=i+1;j<n;j++)
  	{
  		if(a[i]==a[j])
  		{
  		count++;
  		}
  	}
    if(count==0)
    {
    printf("%d",a[i]);
    break;
    }
  }
	return 0;
}
