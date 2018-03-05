#include <stdio.h>
#include<string.h>
int main(void) 
{
	char a[20],temp,flag=0;
	int l,i,j;
	scanf("%s",a);
	l=strlen(a);
	a[j]=a[0];
	for(i=0;i<l;i++)
	{
		if(a[j]==a[i+1])
		{
		flag=0;
		break;
		}
		else
		{
		flag=1;
		}
		j++;
	}
	if(flag==1)
	{
	printf("Yes");
	}
	else
	{
	printf("No");
	}
	return 0;
}
