#include<stdio.h>
int main()
{
    int num, min, max;
    printf("Enter an integer\n");
    scanf("%d", &num);
    printf("Enter the minimum and maximum range\n");
    scanf("%d %d", &min, &max);
    if((num-max)<=0)
    {
        printf("yes");
    }
    else 
    {
     printf("no");
    }
    return 0;
}
