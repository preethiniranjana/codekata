#include <stdio.h>
#include<math.h>
int main(void)
{
	int x,y,temp1,temp2,a,b=0,i,num=0;
	scanf("%d %d",&x,&y);
	for(i=x+1;i<y;++i)
	{
	temp1=i;
	temp2=i;
	while(temp1!=0)
	{
		temp1/=10;
		++num;
	}
	while(temp2!=0)
	{
		a=temp2%10;
		b+=pow(a,num);
		temp2=temp2/10;
	}
	if(b==i)
	{
		printf("%d ",i);
	}
	num=0;
	b=0;
	}
	return 0;
}
