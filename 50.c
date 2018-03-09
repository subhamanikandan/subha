#include<stdio.h>
int main()
{
    int m,n,k;
    printf("enter the base value\n");
    scanf("%d",&m);
    n=m%2;
    if(n==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
