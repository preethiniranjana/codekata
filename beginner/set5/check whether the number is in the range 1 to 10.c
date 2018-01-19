#include <stdio.h>

int main(void) 
{
	int num,i;
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	{
		if(num==i)
		{
			printf("Yes");
		}
	}
	return 0;
}
