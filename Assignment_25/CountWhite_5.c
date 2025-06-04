///////////////////////////////////////////////////////
//
//  File name :     CountWhite_5
//  Description:    Accept String from user and count the white spaces.
//  Author :        Trupti Bhatlekar
//  Date :          01/06/2025
//
///////////////////////////////////////////////////////

/////////////////
// Input:  Marvellous Infosystems
// Output: 1
/////////////////

#include <stdio.h>

int CountWhite(char *str)
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

  iRet = CountWhite(arr);

  printf("%d\n", iRet);

  return 0;
}