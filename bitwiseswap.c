#include <stdio.h>
int main()
{
    int a,b;
    printf(" enter the a and b values\n");
    scanf("%d%d",&a,&b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("value of a=%d\n b=%d\n after swapping", a, b);
    return 0;
}
