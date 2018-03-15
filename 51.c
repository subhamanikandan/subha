#include <stdio.h>
int main() 
{
	int num,r1,r2=0;
	printf("enter the number:");
	scanf("%d",&num);
	while(num!=0)
	{
		r1=num%10;
		r2=(r2*10)+r1;
		num=num/10;
	}
	num=r2;
	while(num!=0)
	{
		r1=num%10;
		printf("%d ",r1);
		num=num/10;
	}
	return 0;
}
