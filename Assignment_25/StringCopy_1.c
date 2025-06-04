///////////////////////////////////////////////////////
//
//  File name :     StringCopy_1
//  Description:    Accept String from user and convert it into lower case
//  Author :        Trupti Bhatlekar
//  Date :          01/06/2025
//
///////////////////////////////////////////////////////

/////////////////
// Input: MARVELLOUS 
// Output: marvellous
/////////////////

#include <stdio.h>

void strlwrx(char *str)
{
  while (*str != '\0')
  {
    if ((*str >= 'A') && (*str <= 'Z'))
    {
      *str = *str + ('a' - 'A');
    }
    str++;
  }
}

int main()
{
  char arr[20];

  printf("Enter string: ");
  scanf("%[^'\n']s", arr);

  strlwrx(arr);

  printf("Modified string is: %s\n", arr);

  return 0;
}