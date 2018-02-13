#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
int i=0,line=0;
printf("Enter a paragraph:");
gets(str);
while(str[i]!='\0')
{
if(str[i]=='.')
line++;
i++;
}
printf("line=%d",line);
return 0;
}
