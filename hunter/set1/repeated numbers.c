#include<stdio.h>
#include<string.h>
int main() 
{
 int n,a[1000],b[1000],i,j,temp,k;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
 	for(j=i+1;j<n;j++)
 	{
 		if(a[i]==a[j])
 		{
 		b[k]=a[i];
 		k++;
 		}
 	}
 }
 for (i=0;b[i]!='\0';++i) 
    {
        for (j=i+1;b[j]!='\0';++j)
        {
            if (b[i]>b[j]) 
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
}
if(b[0]!='\0')
    {
        for (i=0;b[i]!='\0';i++)
        {
            if (b[i]!= b[i+1])
            {
                printf("%d ",b[i]);
            }
            continue;
        }
    }
    else
    {
        printf("unique");
    }

 return 0;
}
