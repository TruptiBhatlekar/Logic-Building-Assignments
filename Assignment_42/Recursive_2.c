///////////////////////////////////////////////////////
//
//  File name :     Recursive_2
//  Description:    Write a recursive program which accept number from user and return summation of its digits.
//  Author :        Trupti Bhatlekar
//  Date :          23/07/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Input: 879
// Output: 24
///////////////////////////////////////////////////////

#include<stdio.h>

int Sum(int iNo)
{
    int iDigit = 0; int iSum = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        iSum = iSum + iDigit;

        iNo = iNo / 10;
    }
    return iSum;
}

int main()
{
    int iValue = 0; int iRet = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    iRet = Sum(iValue);

    printf("%d", iRet);

    return 0;
}