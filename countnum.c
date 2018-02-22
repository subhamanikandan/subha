#include<stdio.h>
int  main()
{
char s[30];
int i=0,count=0;
  printf("enter the string\n");
  scanf("%s",&s);
for(i=0;s[i]!='\0';++i)
{
if(isdigit(s[i]))
{
++count;
}
}
printf("no of digits is %d ",count);
return 0;
}
