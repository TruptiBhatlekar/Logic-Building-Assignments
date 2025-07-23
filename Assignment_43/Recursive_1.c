///////////////////////////////////////////////////////
//
//  File name :     Recursive_1
//  Description:    Write a recursive program which accept string from user and count white spaces.
//  Author :        Trupti Bhatlekar
//  Date :          23/07/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Input: He llo Wo rld
// Output: 3
///////////////////////////////////////////////////////

#include<stdio.h>

int WhiteSpace(char *str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
    if (*str == ' ')
    {
      iCnt++;
    }
    str++;
  }
  return iCnt;
}

int main()
{
    char arr[100];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^\n]s", arr);

    iRet = WhiteSpace(arr);

    printf("%d\n", iRet);

    return 0;
}