///////////////////////////////////////////////////////
//
//  File name :     CheckDivisibleNumber_4
//  Description:    Check Number if it is divisible by 5 or not.
//  Author :        Trupti Bhatlekar
//  Date :          08/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

typedef int Bool;
#define TRUE  1
#define FALSE 0

Bool check(int iNo)
{
    if((iNo %5) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    Bool bRet = FALSE;

    printf("Enter number:");
    scanf("%d", &iValue);

    bRet = check(iValue);

    if (bRet == TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }

    return 0;

}