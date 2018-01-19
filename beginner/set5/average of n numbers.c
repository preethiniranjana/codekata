#include <stdio.h>

int main(void) 
{
	int num,i,s=0,avg,a[100];
	scanf("%d\n",&num);
	for(i=0;i<num;i++)
	{
	scanf("%d ",&a[i]);
	}
	for(i=0;i<num;i++)
	{
	s=s+a[i];
	}
	avg=s/num;
	printf("%d",avg);
	return 0;
}
