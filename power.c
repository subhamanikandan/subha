#include<stdio.h>
int main(){
   
    int p,n;
    int m=1;
    int i = 0;
    printf("Enter a number and power: ");
    scanf("%d%d",&n,&p);
    for(i = 0;i<p;i++)
    {
        m = m * n;
    }
    printf("%d to the power of %d is = %d\n",n,p,m);
    return 0;
}
