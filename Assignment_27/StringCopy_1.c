///////////////////////////////////////////////////////
//
//  File name :     StringCopy_1
//  Description:    Accept String from user and copy the contents into another string
//  Author :        Trupti Bhatlekar
//  Date :          01/06/2025
//
///////////////////////////////////////////////////////

/////////////////
// Input: Marvellous Multi OS
// Output: Marvellous Multi OS - in another string
/////////////////

#include <stdio.h>

void StrCpyX(char *src, char *dest)
{
  if (src == NULL || dest == NULL)
  {
    return;
  }
  while (*src != '\0')
  {
    *dest = *src;
    src++;
    dest++;
  }
  *dest = '\0';
}

int main()
{
  char arr[30] = "Marvellous Multi OS";
  char brr[30];

  StrCpyX(arr, brr);

  printf("Copied String: %s\n", brr);

  return 0;
}
