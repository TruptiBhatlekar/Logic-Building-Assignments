///////////////////////////////////////////////////////
//
//  File name :     StringCopy_3
//  Description:    Accept String from user and copy the capital letters of that string into another.
//  Author :        Trupti Bhatlekar
//  Date :          01/06/2025
//
///////////////////////////////////////////////////////

/////////////////
// Input: Marvellous Multi OS
// Output: MMOS - in another string
/////////////////

#include <stdio.h>

void StrCpyCap(char *src, char *dest)
{
  if (src == NULL || dest == NULL)
  {
    return;
  }
  while (*src != '\0')
  {
    if ((*src >= 'A') && (*src <= 'Z'))
    {
      *dest = *src;
      dest++;
    }
    src++;
  }
  *dest = '\0';
}

int main()
{
  char arr[30] = "Marvellous Multi OS";
  char brr[30];

  StrCpyCap(arr, brr);

  printf("%s\n", brr);

  return 0;
}
