#include <stdio.h>
int main()
{
    char    str[100];
    int Digits,Alphabet,SpecialChar,Spaces;
    int count;
    Digits=Alphabet=SpecialChar=Spaces=0;
    printf("Enter a string: ");
        scanf("%[^\n]s",str);
    for(count=0;str[count]!=NULL;count++)
    {
        if(str[count]>='0' && str[count]<='9')
            Digits++;
        else if((str[count]>='A' && str[count]<='Z')||(str[count]>='a' && 
        str[count]<='z'))
            Alphabet++;
        else if(str[count]==' ')
            Spaces++;
        else
            SpecialChar++;
    }
    printf("\nDigits: %d \nAlphabets: %d \nSpaces: %d \nSpecial Characters: %d",
    Digits,Alphabet,Spaces,SpecialChar);
    return 0;
}
