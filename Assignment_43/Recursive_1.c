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

#include <stdio.h>

int WhiteSpace(char *str)
{
  static int iCnt = 0;

  if (*str != '\0')
  {
    if (*str == ' ')
    {
      iCnt++;
    }
    WhiteSpace(str + 1);
  }

  return iCnt;
}

int main()
{
  char Arr[50];
  int iRet = 0;

  printf("Enter string: ");
  scanf(" %[^\n]s", Arr);

  int iRet = WhiteSpace(Arr);
  printf("White spaces are : %d\n", iRet);

  return 0;
}
