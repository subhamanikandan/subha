#include <stdio.h>
int main()
{
char ch[50];
printf("enter the character\n");
scanf("%d",&ch);
if(((ch>='A')||(ch<='Z'))&&((ch>='a')||(ch<='z'))&&((ch>='0')||(ch<='9')))
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
