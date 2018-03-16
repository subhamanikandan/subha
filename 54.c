#include <stdio.h>
int main()
{
 int n,m;
    printf("enter the number\n");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("%d",n);
    }
    else
    {
        m=n-1;
        printf("%d",m);
    }
return 0;
}
