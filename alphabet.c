#include <stdio.h>
int main()
{
char ch;
printf("enter the character\n");
scanf("%d",&ch);
if((ch>='A')||(ch<='Z')&&(ch>='a')||(ch<='z'))
{
printf("the character is alphabet");
}
else
{
printf("no");
}
return 0;
}
