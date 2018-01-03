#include <stdio.h>
int main()
{
    int num, i,temp=0,rev=0,rem,m;
    scanf("%d",&num);
    for(i=2;i<=num/2;++i)
    {
       
        if(num%i==0)
        {
            temp=1;
            break;
        }
    }
    m=num;
    if (temp==0)
        {
        while(num!=0)
        {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
        }
        if(rev==m)
        printf("yes");
    else
        printf("no");
        }
    return 0;
}
