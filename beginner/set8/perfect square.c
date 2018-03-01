#include <stdio.h>
int main(void)
{
int m,n,d,i,p,flag=0;
scanf("%d %d",&m,&n);
d=m*n;
for(i=1;i<d/2;i++)
{
	p=i*i;
if(p==d)
{
	printf("Yes");
	flag=1;
	break;
}
}
if(flag==0)
{
printf("No");
}
	return 0;
}
