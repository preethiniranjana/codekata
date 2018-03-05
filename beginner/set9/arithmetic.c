#include <stdio.h>
int main(void) 
{
	int i,n1,n2,y;
	char s;
	for(i=0;i<4;i++)
	{
		scanf("%d %c %d",&n1,&s,&n2);
		if(s=='/')
		{
			y=n1/n2;
			printf("%d\n",y);
		}
		else if(s=='%')
		{
			y=n1%n2;
			printf("%d\n",y);
		}
		else
		break;
	}
	return 0;
}
