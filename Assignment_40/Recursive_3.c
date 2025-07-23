///////////////////////////////////////////////////////
//
//  File name :     Recursive_3
//  Description:    Write a recursive program to display pattern.
//  Author :        Trupti Bhatlekar
//  Date :          22/07/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Output: 5 4 3 2 1 
///////////////////////////////////////////////////////

#include<stdio.h>

void Display()
{
    int iCnt = 0;
    
    for(iCnt = 5; iCnt >= 1; iCnt--)
    {
        printf(" %d ", iCnt);
    }
}

int main()
{
    Display();

    return 0;
}