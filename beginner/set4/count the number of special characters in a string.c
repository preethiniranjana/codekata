#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[1000];
	int n,i,count=0;
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]=='.'||a[i]==','||a[i]=='#'||a[i]=='?'||a[i]=='_'||a[i]=='!'||(a[i]>='0'&&a[i]<='9'))
		count=count+1;
	}
	printf("%d",count-1);
}

   
