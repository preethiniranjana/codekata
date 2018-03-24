#include <stdio.h>
#include<string.h>
int main(void)
{
char s[20],a[10];
int i,j,count=0;
scanf("%s %s",s,a);
for(i=0;s[i]!='\0';i++)
{
count++;	
}
for(j=0;a[j]!='\0';j++)
{
s[count+1]=a[j];
count++;
}
for(i=0;i<=count;i++)
{
printf("%c",s[i]);
}
	return 0;
}
