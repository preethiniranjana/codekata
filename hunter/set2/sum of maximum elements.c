#include<stdio.h>
int main()
{
int n,s[100],i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&s[i]);
}
int sum=0;
for(i=0;i<n;i++)
{
    sum=sum+s[i]; 
}
printf("%d",sum);
return 0;
}
