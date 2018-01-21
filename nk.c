#include <stdio.h>
int main()
{
   int n,k,a[10],i,sum=0;
   printf("enter the  numbers:\n");
   scanf("%d",&k);
   for(i=0;i<=n;i++)
   {
   printf(a[i]);
   }
   for(i=0;i<=k;i++)
   {
   	sum=sum+a[i];
   }
   printf("sum=%d",sum);
    return 0;
}
