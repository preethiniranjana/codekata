#include <stdio.h>

int main(void)
{
	int num,temp,a,b=0;
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		a=num%10;
		b=b+a*a*a;
		num=num/10;
	}
	if(b==temp)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
