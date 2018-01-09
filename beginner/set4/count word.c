#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int len,count=0,i,w;
    gets(s);
    len=strlen(s);
    for(i=0;i<len;i++)
     {
        if(s[i]==' ')
        count++;   
    }
    w=count+1;
    printf("%d",w);
return 0;   
}
