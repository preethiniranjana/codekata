#include <stdio.h>
int main(void) 
{
	char a[20],temp[20];
	int i,l,j;
	scanf("%s",a);
	
	for(i=0;a[i]!='\0';i++)
	{
		for(j=i+1;a[j]!='\0';j++)
		{
		if(a[i]>a[j])
		{
			temp[l]=a[i];
			a[i]=a[j];
			a[j]=temp[l];
		}
		}
	}
	printf("%s",a);

	return 0;
}
