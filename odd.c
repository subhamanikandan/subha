#include <stdio.h>
int main()
{
    int num,m ,n;  
    printf("enter the 2 numbers:");
    scanf("%d%d",&m,&n);
    printf(" Odd Numbers in an interval:\n");
    for (num = m; num <= n; num++)
        {
               if (num % 2 == 1)
                  printf ("%d ", num);
         }
return 0;
}
