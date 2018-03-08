#include <stdio.h>
#include<string.h>
int main(void)
{
int n,k,i,flag=0;
scanf("%d\n",&n);
for(i=0;i<=10;i++)
{
	if(i*2==n)
	{
	flag=1;
	break;
	}
	else
	flag=0;	
}
if(flag==1)
{
	printf("%d",i);
}
else
{
	printf("%d",n);
}
	return 0;
}
