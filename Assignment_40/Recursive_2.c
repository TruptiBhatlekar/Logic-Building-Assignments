///////////////////////////////////////////////////////
//
//  File name :     Recursive_2
//  Description:    Write a recursive program to display pattern.
//  Author :        Trupti Bhatlekar
//  Date :          22/07/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Output: 1 2 3 4 5 
///////////////////////////////////////////////////////

#include<stdio.h>

void Display()
{
    int iCnt = 0;
    
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf(" %d ", iCnt);
    }
}

int main()
{
    Display();

    return 0;
}