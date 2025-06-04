///////////////////////////////////////////////////////
//
//  File name :     ChkSmall_4
//  Description:    Accept character from user and check whether it is small or not. 
//  Author :        Trupti Bhatlekar
//  Date :          01/06/2025
//
///////////////////////////////////////////////////////
// Input: A
// Output: TRUE
// Input: s
// Output: FALSE
///////////////////////////////////////////////////////

#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkSmall(char ch)
{
  if (ch >= 'a' && ch <= 'z')
  {
    return TRUE;
  }
  else
  {
    return FALSE;
  }
}

int main()
{
  char cValue = '\0';
  BOOL bRet = FALSE;

  printf("Enter the character: ");
  scanf("%c", &cValue);

  bRet = ChkSmall(cValue);

  if (bRet == TRUE)
    printf("It is Small case Character\n");
  else
    printf("It is not a Small case Character\n");

  return 0;
}