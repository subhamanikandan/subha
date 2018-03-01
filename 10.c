#include <stdio.h>
  int main()
  {
    int a[10], i, b;
    printf("Enter ten values:");
    for (i = 0; i < 10; i++) 
    {
    scanf("%d", &a[i]);
    }
    b = a[0];
    for (i = 0; i < 10; i++) 
    {
if (a[i] > b) 
{
     b = a[i];
    }
    }
    printf("Greatest of ten numbers is %d", b);
    return 0;
  }
