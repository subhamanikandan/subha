#include <stdio.h>
void main()
{
	char ch;
	printf("enter the character\n");
	scanf("%d",&ch);
	if((ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')&&(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'))
	{
		printf("the character is vowel");
	
	}
	else
	{
		printf("the character is consonant");
	}
}
