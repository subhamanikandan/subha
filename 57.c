#include <stdio.h>
int main()
{
int m,n;
printf("Enter the 2 numbers \n");
scanf("%d%d",&m , &n);
m=m+n;
n=m-n;
m=m-n;
printf("a= %d\nb= %d\n",m,n);
return 0;
}
