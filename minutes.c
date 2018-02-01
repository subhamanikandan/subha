#include <stdio.h>
int main()
{
int min,hour,minutes;
printf("enter the minutes\n");
scanf("%d",&min);
hour=min/60;
minutes=min%60;
printf("%d minutes= %d hours,%d minutes",min,hour,minutes);
	return 0;
}
