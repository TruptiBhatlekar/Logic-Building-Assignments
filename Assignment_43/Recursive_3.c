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

#include <stdio.h>

int Small(char *str)
{
  static int iCnt = 0;

  if (*str != '\0')
  {
    if ((*str >= 'a') && (*str <= 'z'))
    {
      iCnt++;
    }
    Small(str + 1);
  }

  return iCnt;
}

int main()
{
  char Arr[50];
  int iRet = 0;

  printf("Enter string: ");
  scanf(" %[^\n]s", Arr);

  int iRet = Small(Arr);
  printf("Number of small letters are : %d\n", iRet);

  return 0;
}
