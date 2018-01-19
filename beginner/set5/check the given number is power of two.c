#include<stdio.h>
int main()
{
	int n,i,p=2,x=1,s=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		x=x*p;
		if(x==n)
		{
			s=1;
			break;
		}
		if(x>n)
		break;
	}
	if(s==1)
        printf("yes");
	else
		printf("no");
		return 0;
}
