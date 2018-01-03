#include <stdio.h>

int main(void) 
{
int num,r=1,i;
scanf("%d",&num);
for(i=1;i<=num;i++)
{
	r=r*i;
}
printf("%d",r);
	return 0;
}
