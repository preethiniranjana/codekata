#include <stdio.h>

int main(void) 
{
int hrs1,hrs2,mins1,mins2,hrs3,mins3;
scanf("%d %d\n",&hrs1,&mins1);
scanf("%d %d\n",&hrs2,&mins2);
hrs3=abs(hrs1-hrs2);
mins3=abs(mins1-mins2);
printf("%d %d",hrs3,mins3);
	return 0;
}
