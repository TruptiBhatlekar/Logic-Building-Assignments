///////////////////////////////////////////////////////
//
//  File name :     CheckDigit_3
//  Description:    Accept character from user and check whether it is digit or not. 
//  Author :        Trupti Bhatlekar
//  Date :          01/06/2025
//
///////////////////////////////////////////////////////
// Input: 8
// Output: TRUE
// Input: A
// Output: FALSE
///////////////////////////////////////////////////////

#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkDigit(char ch)
{
  if (ch >= '0' && ch <= '9')
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

  bRet = ChkDigit(cValue);

  if (bRet == TRUE)
    printf("It is Digit\n");
  else
    printf("It is not a Digit\n");

  return 0;
}