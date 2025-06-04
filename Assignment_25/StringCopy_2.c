///////////////////////////////////////////////////////
//
//  File name :     StringCopy_2
//  Description:    Accept String from user and convert it into upper case
//  Author :        Trupti Bhatlekar
//  Date :          01/06/2025
//
///////////////////////////////////////////////////////

/////////////////
// Input:  marvellous
// Output: MARVELLOUS 
/////////////////

#include <stdio.h>

void struprx(char *str)
{
  while (*str != '\0')
  {
    if ((*str >= 'a') && (*str <= 'z'))
    {
      *str = *str - ('a' - 'A');
    }
    str++;
  }
}

int main()
{
  char arr[20];

  printf("Enter string: ");
  scanf("%[^'\n']s", arr);

  struprx(arr);

  printf("Modified string is: %s\n", arr);

  return 0;
}