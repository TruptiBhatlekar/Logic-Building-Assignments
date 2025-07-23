///////////////////////////////////////////////////////
//
//  File name :     Recursive_5
//  Description:    Accept number from user and write a recursive program to display pattern.
//  Author :        Trupti Bhatlekar
//  Date :          23/07/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Input: 6
// Output: a b c d e f
///////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char ch = 'a';

    if((iNo < 1 || iNo > 26))
    {
        printf("Wrong input");
        return;
    }
        
    for (iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("%c ",ch);
        ch++; 
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}