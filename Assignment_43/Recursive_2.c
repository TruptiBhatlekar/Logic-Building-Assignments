///////////////////////////////////////////////////////
//
//  File name :     Recursive_2
//  Description:    Write a recursive program which accept number from user and return largest digit.
//  Author :        Trupti Bhatlekar
//  Date :          23/07/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Input: 87653
// Output: 8
///////////////////////////////////////////////////////

#include<stdio.h>

int Max(int iNo)
{
    int iDigit = 0; int iMax = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit > iMax)
        {
            iMax = iDigit;
        }
        iNo = iNo / 10;
    }
    return iMax;
}

int main()
{
    int iValue = 0; int iRet = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    iRet = Max(iValue);

    printf("%d", iRet);

    return 0;
}