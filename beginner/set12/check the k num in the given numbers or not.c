#include <stdio.h>
int main(void) 
{
int n,k,x[10],i,flag=0;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
    scanf("%d",&x[i]);
}
for(i=0;i<n;i++)
{
if(k==x[i])
{
flag=1;
break;
}
else
flag=0;
}
if(flag==1)
printf("yes");
else
printf("no");
	return 0;
}
