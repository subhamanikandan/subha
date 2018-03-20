#include <stdio.h>
int main()
{
int m[10], i, n;
printf("Enter ten values:");
for (i = 0; i < 10; i++) 
{
scanf("%d", &m[i]);
}
n = m[0];
for (i = 0; i < 10; i++) 
{
if (m[i] > n) 
{
n= m[i];
}
}
printf(" %d", n);
return 0;
}
