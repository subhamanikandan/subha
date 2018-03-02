#include<stdio.h>
 int main()
{
char s1[10],s2[10];
int i,temp = 0;
printf("Enter the string1 value: ");
gets(s1);
printf(" Enter the String2 value: ");
gets(s2);
for(i=0; s1[i]!='\0'; i++)
{
if(s1[i] == s2[i])
temp = 1;
else
temp = 0;
}
if(temp == 1)
printf("%s",s1);
else
printf(" not same.");
return 0;
}
