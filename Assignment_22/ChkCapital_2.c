///////////////////////////////////////////////////////
//
//  File name :     ChkCapital_2
//  Description:    Accept character from user and check whether it is Capital or not. 
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

BOOL ChkCapital(char ch)
{
if (ch >= 'A' && ch <= 'Z')
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

  bRet = ChkCapital(cValue);

  if (bRet == TRUE)
    {
        printf("It is Capital Character\n");
    }
  else
    {
        printf("It is not a Capital Character\n");
    }

  return 0;
}