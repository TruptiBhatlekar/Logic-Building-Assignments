///////////////////////////////////////////////////////
//
//  File name :     Recursive_4
//  Description:    Write a recursive program to display pattern.
//  Author :        Trupti Bhatlekar
//  Date :          22/07/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Output: A B C D E F 
///////////////////////////////////////////////////////

#include<stdio.h>

void Display()
{
    char ch = '\0';
    
    for(ch = 'A'; ch <= 'F'; ch++)
    {
        printf(" %c ", ch);
    }
}

int main()
{
    Display();

    return 0;
}