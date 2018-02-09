#include<stdio.h>
int main()
{
	int h1,h2,h3,m1,m2,m3;
	printf("enter the   hour and minutes");
	scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
	h3=h1-h2;
	m3=m1-m2;
	printf("%d:%d",h3,m3);
	return 0;
}
