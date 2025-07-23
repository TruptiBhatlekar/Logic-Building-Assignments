///////////////////////////////////////////////////////
//
//  File name :     Recursive_5
//  Description:    Write a recursive program which accept number from user and return its product of digits.
//  Author :        Trupti Bhatlekar
//  Date :          23/07/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Input: 523
// Output: 30
///////////////////////////////////////////////////////

#include <stdio.h>

int Mult(int iNo)
{
    int iMult = 1; int iDigit = 0;
        
    if(iNo == 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        iMult *= iDigit;

        iNo /= 10;
    }
    return iMult;
}

int main()
{
    int iValue = 0; int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = Mult(iValue);

    printf("%d", iRet);

    return 0;
}