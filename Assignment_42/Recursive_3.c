///////////////////////////////////////////////////////
//
//  File name :     Recursive_3
//  Description:    Write a recursive program which accept string from user and count number of characters.
//  Author :        Trupti Bhatlekar
//  Date :          23/07/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Input: Hello World
// Output: 10 
///////////////////////////////////////////////////////

#include<stdio.h>

int Strlen(char *str)
{
    int iCnt = 0;

    while(*str != 0)
    {
        if(((*str >= 'A') && (*str <= 'Z')) || ((*str >= 'a') && (*str <= 'z')))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter String: ");
    scanf("%[^'\n']s",arr);

    iRet = Strlen(arr);

    printf("%d", iRet);

    return 0;
}