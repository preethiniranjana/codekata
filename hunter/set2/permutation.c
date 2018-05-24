#include<stdio.h>
#include<string.h>
void swap(char *a,char *b);
void permutate(char*,int,int);
int factorial(int l);
void main()
{   int l;
    char s[1000];
    gets(s);
   l=strlen(s);
   permutate(s,0,l-1);
}
void permutate(char *s,int l,int r)
{
int i;
    if(l==r)
        printf("%s\n",s);
    else{
        for(i=l;i<=r;i++)
        {
            swap(s+l,s+i);
            permutate(s,l+1,r);
            swap(s+l,s+i);
        }
    }
}
void swap(char *a,char *b)
{
    char temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
getch();
