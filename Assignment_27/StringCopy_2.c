///////////////////////////////////////////////////////
//
//  File name :     StringCopy_2
//  Description:    Accept String from user and copy the N contents into another string
//  Author :        Trupti Bhatlekar
//  Date :          01/06/2025
//
///////////////////////////////////////////////////////

/////////////////
// Input: Marvellous Multi OS 10
// Output: Marvellous - in another string
/////////////////

#include <stdio.h>

void StrNCpyX(char *src, char *dest, int iCnt)
{
  if (src == NULL || dest == NULL || iCnt <= 0)
    {
      return;
    }

  while ((*src != '\0') && (iCnt != 0))
  {
    *dest = *src;
    src++;
    dest++;
    iCnt--;
  }

  *dest = '\0';
}

int main()
{
  char arr[30] = "Marvellous Multi OS";
  char brr[30];

  StrNCpyX(arr, brr, 10);

  printf("Copied First 10 Characters: %s\n", brr);

  return 0;
}