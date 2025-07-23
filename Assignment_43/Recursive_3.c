///////////////////////////////////////////////////////
//
//  File name :     Recursive_3
//  Description:    Write a recursive program which accept string from user and count number of small characters.
//  Author :        Trupti Bhatlekar
//  Date :          23/07/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Input: HElloWOrlD
// Output: 5 
///////////////////////////////////////////////////////

#include<stdio.h>

int Small(char *str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
    if ((*str >= 'a') && (*str <= 'z'))
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

    iRet = Small(arr);

    printf("%d", iRet);

    return 0;
}