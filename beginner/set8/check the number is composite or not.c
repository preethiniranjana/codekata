#include <stdio.h>

int main(void) 
{
int i,n,count=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
	count++;
}
}
if(count==2||n==1)
{
	printf("no");
}
else
printf("yes");
	return 0;
}
