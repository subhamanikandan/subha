#include<stdio.h>
int main()
{
int count = 0,n;
char str[10];
printf("enter the string and n value\n");
scanf("%s%d",str,&n);
while (count < n)
{
    printf("%s\n", str);
    count = count + 1;
}
return 0;
}
