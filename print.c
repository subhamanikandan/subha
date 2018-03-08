#include <stdio.h>
int main() 
{
char s[10];
int k,i;
printf("enter the string and number\n");
scanf("%s%d",s,&k);
for(i=1;i<=k;i++)
{
	printf("%s\n",s);
}
	return 0;
}
