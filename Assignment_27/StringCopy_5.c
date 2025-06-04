///////////////////////////////////////////////////////
//
//  File name :     StringCopy_5
//  Description:    Accept 2 String from user and connect second string after first string.
//  Author :        Trupti Bhatlekar
//  Date :          01/06/2025
//
///////////////////////////////////////////////////////

/////////////////
// Input: Marvellous Infosystems 
//        Logic Buidling
// Output: Marvellous Infosystems Logic Buidling
/////////////////

#include <stdio.h>

void StrCatX(char *src, char *dest)
{
  if (src == NULL || dest == NULL)
    {
      return;
    }

  while (*src != '\0')
  {
    src++;
  }

  while (*dest != '\0')
  {
    *src = *dest;
    src++;
    dest++;
  }

  *src = '\0';
}

int main()
{
  char arr[50] = "Marvellous Infosystems\t";
  char brr[30] = "Logic Building";

  StrCatX(arr, brr);

  printf("%s\n", arr);

  return 0;
}