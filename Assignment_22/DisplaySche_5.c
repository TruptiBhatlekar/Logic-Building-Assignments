///////////////////////////////////////////////////////
//
//  File name :     DisplaySche_5
//  Description:    Accept character from user and check whether it is Capital or not. 
//  Author :        Trupti Bhatlekar
//  Date :          01/06/2025
//
///////////////////////////////////////////////////////
// Input: C
// Output: Your exam at 9.20 am
// Input: d
// Output: Your exam at 10.30 am
/////////////////////////////////////////////////////////

#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL DisplaySchedule(char chDiv)
{
  if (chDiv == 'A' || chDiv == 'a')
    {printf("Your exam at 7.00 AM\n");}
  else if (chDiv == 'B' || chDiv == 'b')
    printf("Your exam at 8.30 AM\n");
  else if (chDiv == 'C' || chDiv == 'c')
    printf("Your exam at 9.20 AM\n");
  else if (chDiv == 'D' || chDiv == 'd')
    printf("Your exam at 10.30 AM\n");
  else
    printf("Invalid Division\n");

  return TRUE;
}

int main()
{
  char cValue = '\0';
  BOOL bRet = FALSE;

  printf("Enter your division: ");
  scanf("%c", &cValue);

  bRet = DisplaySchedule(cValue);

  return 0;
}