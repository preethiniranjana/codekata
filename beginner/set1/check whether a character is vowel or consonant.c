#include <stdio.h>
int main(void)
{
char c;
int lower,upper;
scanf("%c",&c);
lower=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
upper=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
if(lower||upper)
printf("vowel");
else
printf("consonant");
	return 0;
}
