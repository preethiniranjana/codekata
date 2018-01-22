#include<stdio.h>
#include<string.h>
int main(void)
{
char s[100];
int n,i,flag=0;
scanf("%s",s);
n=strlen(s);
for(i=0;i<n;i++)
{
  if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
{
	flag=1;
}
}
if(flag==1)
{
	printf("yes");
}
else
printf("no");

return 0;
}
