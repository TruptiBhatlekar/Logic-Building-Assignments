///////////////////////////////////////////////////////
//
//  File name :     StringCopy_1
//  Description:    Accept String and character from user and check whether that character is present or not in string
//  Author :        Trupti Bhatlekar
//  Date :          01/06/2025
//
///////////////////////////////////////////////////////

/////////////////
// Input: Marvellous Multi OS - M
// Output: True
// Input: Marvellous Multi OS - P
// Output: False
/////////////////

#include <stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL; 

BOOL ChkChar(char *str, char ch)
{
  while(*str != '\0')
  {
    if (*str == ch)
    {
      return TRUE;
    }
    str++;
  }
    return FALSE;
}

int main()
{
  char arr[20];
  char cValue;
  BOOL bRet = FALSE;

  printf("Enter String: \n");
  scanf("%[^'\n']s",arr);
  getchar();

  printf("Enter your character: \n");
  scanf("%c",&cValue);

  bRet = ChkChar(arr, cValue);
  if(bRet == TRUE)
  {
    printf("character found");
  }
  else
  {
    printf("character not found");
  }

  return 0;
}