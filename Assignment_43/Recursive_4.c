///////////////////////////////////////////////////////
//
//  File name :     Recursive_4
//  Description:    Write a recursive program which accept number from user and return smallest digit.
//  Author :        Trupti Bhatlekar
//  Date :          23/07/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Input: 78653
// Output: 3
///////////////////////////////////////////////////////

#include <stdio.h>

int Min(int iNo)
{
    int iDigit = 0; int iMin = 9;

    if(iNo < 0) 
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
        iNo = iNo / 10;
    }
    return iMin;
}

int main()
{
    int iValue = 0; int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = Min(iValue);

    printf("%d", iRet);

    return 0;
}