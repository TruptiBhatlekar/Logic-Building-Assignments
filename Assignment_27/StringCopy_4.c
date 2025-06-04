///////////////////////////////////////////////////////
//
//  File name :     StringCopy_4
//  Description:    Accept String from user and copy the small letters of that string into another.
//  Author :        Trupti Bhatlekar
//  Date :          01/06/2025
//
///////////////////////////////////////////////////////

/////////////////
// Input: Marvellous Multi OS
// Output: arvellousuliti - in another string
/////////////////

#include <stdio.h>

void StrCpySmall(char *src, char*dest)
{
  if (src == NULL || dest == NULL)
  {
    return;
  }
  while(*src != '\0')
  {
    if((*src >= 'a')&&(*src <= 'z'))
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

  StrCpySmall(arr,brr);

  printf("%s\n",brr);

  return 0;
}