///////////////////////////////////////////////////////
//
//  File name :     Recursive_5
//  Description:    Write a recursive program which accept number from user and return its reverse number.
//  Author :        Trupti Bhatlekar
//  Date :          23/07/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Input: 317
// Output: 713
///////////////////////////////////////////////////////

#include <stdio.h>

int Reverse(int iNo)
{
    int i = 0; 

    while (iNo != 0)
    {
        i = (i * 10) + (iNo % 10);
        iNo = iNo / 10;
    }
    return i;
}

int main()
{
    int iValue = 0; int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = Reverse(iValue);

    printf("%d", iRet);

    return 0;
}