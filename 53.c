#include <stdio.h>
int main() 
{
	int i,n,array[50],sum=0;
	printf("enter the no of element\n");
	scanf("%d",&n);
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	
	}
	for(i=0;i<n;i++)
	{
		sum=sum+array[i];
	}
	printf("\n%d",sum);
	return 0;
}
