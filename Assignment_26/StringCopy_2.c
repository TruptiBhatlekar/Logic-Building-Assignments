///////////////////////////////////////////////////////
//
//  File name :     StringCopy_2
//  Description:    Accept String and character from user and return frequency of character
//  Author :        Trupti Bhatlekar
//  Date :          01/06/2025
//
///////////////////////////////////////////////////////

/////////////////
// Input: Marvellous Multi OS - M 
// Output: 2
// Input: Marvellous Multi OS - P
// Output: 0
/////////////////

#include <stdio.h>

int CountChar(char *str, char ch)
{
  int iCnt = 0;
  while(*str != '\0')
  {
    if (*str == ch)
    {
      iCnt++;
    }
    str++;
  }
  return iCnt;
}

int main()
{
  char arr[20];
  char cValue;
  int iRet = 0;

  printf("Enter String: \n");
  scanf("%[^'\n']s",arr);
  getchar();

  printf("Enter your character: \n");
  scanf("%c",&cValue);

  iRet = CountChar(arr,cValue);

  printf("Character Frequency is %d", iRet);

  return 0;
}