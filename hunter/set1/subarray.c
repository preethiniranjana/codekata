#include <stdio.h>
int main(void) {
	int a[10],i,b[10],c=0,j,n,m;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=1;i<=m;i++)
	{
	scanf("%d",&b[i]);
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(a[i]==b[j]){
				c++;
			}
		}
	}
		if(c==m)
		{
			printf("yes");
		}
	  else
	  {
	    printf("no");
	  }
	return 0;
}
