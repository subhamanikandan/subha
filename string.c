#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
int i,count=0;
printf( "Enter string:\n ");
gets(str);
	for(i=0;str[i]!='\0';i++)
	{
   if(str[i]!= ' ') 
   {
   count++;
   }
   }
   	printf(" number of charaters=%d",count);
return 0;
}
