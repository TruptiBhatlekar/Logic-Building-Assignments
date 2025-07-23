///////////////////////////////////////////////////////
//
//  File name :     Recursive_1
//  Description:    Write a recursive program to display pattern.
//  Author :        Trupti Bhatlekar
//  Date :          22/07/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Output: * * * * * 
///////////////////////////////////////////////////////

#include<stdio.h>

void Display()
{
    int i = 0;
    for(i = 1; i <= 5; i++)
    {
        printf(" * ");
    }
}

int main()
{
    Display();

    return 0;
}