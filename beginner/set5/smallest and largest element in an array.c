#include <stdio.h>

int main(void) 
{
	int num,a[100],i,small,lar,j;
	scanf("%d\n",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d ",&a[i]);
	}
	small=a[0];
	for(i=0;i<num;i++)
	{
	if(small>a[i])
	small=a[i];
	}
	printf("%d ",small);
	lar=a[0];
	for(j=0;j<num;j++)
	{
	if(lar<a[j])
	lar=a[j];
	}
	printf("%d",lar);
	return 0;
}
