#include <stdio.h>

int main(void)
{
	int a,b,temp,i,f;
	scanf("%d %d",&a,&b);
	if(a>b)
	{
		temp=a;
		a=b;
		b=temp;
	}
	a+=1;
while(a<b)
{
	f=0;
	for(i=2;i<=a/2;++i)
	{
		if(a%i==0)
		{
		f=1;
                        break;
		}
	}
		if(f==0)
		printf("%d ",a);
	a++;
}
	return 0;
}
