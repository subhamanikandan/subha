#include<stdio.h>
int main()
{
int n,m;
printf("enter two numbers\n");
scanf("%d%d",&n,&m);
m=n*m;
scanf("%d",&m);
if(m%2==0)
{
printf("even");
}
else
{
printf("odd");
}
return 0;
}
