///////////////////////////////////////////////////////
//
//  File name :     StringToggle_3
//  Description:    Accept String from user and toggle the case.
//  Author :        Trupti Bhatlekar
//  Date :          01/06/2025
//
///////////////////////////////////////////////////////

/////////////////
// Input:  Marvellous
// Output: mARVELLOUS 
/////////////////

#include <stdio.h>

void strtogglex(char *str)
{
  while (*str != '\0')
  {
    if ((*str >= 'A') && (*str <= 'Z'))
    {
      *str = *str + ('a' - 'A'); 
    }
    else if ((*str >= 'a') && (*str <= 'z'))
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

  strtogglex(arr);

  printf("Modified string is: %s\n", arr);

  return 0;
}