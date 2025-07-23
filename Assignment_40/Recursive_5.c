///////////////////////////////////////////////////////
//
//  File name :     Recursive_5
//  Description:    Write a recursive program to display pattern.
//  Author :        Trupti Bhatlekar
//  Date :          22/07/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Output: a b c d e f 
///////////////////////////////////////////////////////

#include<stdio.h>

void Display()
{
    char ch = '\0';
    
    for(ch = 'a'; ch <= 'f'; ch++)
    {
        printf(" %c ", ch);
    }
}

int main()
{
    Display();

    return 0;
}