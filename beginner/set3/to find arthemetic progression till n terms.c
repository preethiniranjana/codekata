#include <stdio.h>

int main(void) 
{
int a,n,d,sum=0,val,i;
scanf("%d %d %d",&n,&a,&d);
val=a;
for(i=0;i<n;i++)
{
	sum+=val;
val=val+d;	
}
printf("%d",sum);
	return 0;
}
