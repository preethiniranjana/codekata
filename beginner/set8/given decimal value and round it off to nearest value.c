#include <stdio.h>

int main(void) 
{
float n,d;
int m;
scanf("%f",&n);
m=n;
d=n-m;
if(d>=0.1&&d<0.5)
{
m=m+0;
}
if(d>=0.5&&d<=0.9)
{
	m+=1;
}
printf("%d",m);

	return 0;
}
