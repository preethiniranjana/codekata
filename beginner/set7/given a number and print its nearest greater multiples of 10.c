#include <stdio.h>
int main(void)
{
int n;
scanf("%d",&n);
do
{
n++;
}
while(n%10!=0);
printf("%d",n);

	return 0;
}
