///////////////////////////////////////////////////////
//
//  File name :     ConvertCharacter_4
//  Description:    Accept one character and convert it to case character.
//  Author :        Trupti Bhatlekar
//  Date :          10/05/2025
//
///////////////////////////////////////////////////////


#include <stdio.h>

char DisplayConvert(char cValue)
{
    if((cValue>='A') && (cValue<='Z'))
    {
        cValue = cValue +32;;
        printf("%c",cValue);

    }
    else if((cValue>='a') && (cValue<='z'))
    {
        cValue = cValue -32;
        printf("%c",cValue);
    }
        return cValue;

}

int main()
{
    char cValue = '\0';
    printf("Enter Charachter: ");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;

}