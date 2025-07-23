///////////////////////////////////////////////////////
//
//  File name :     Recursive_4
//  Description:    Write a recursive program which accept number from user and return its factorial.
//  Author :        Trupti Bhatlekar
//  Date :          23/07/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Input: 5
// Output: 120
///////////////////////////////////////////////////////

#include <stdio.h>

int Fact(int iNo)
{
    int i = 0; int iFact = 1;
    
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for (i = 1; i <= iNo; i++)
    {
        iFact = iFact * i;
    }
    return iFact;
}

int main()
{
    int iValue = 0; int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = Fact(iValue);

    printf("%d", iRet);

    return 0;
}