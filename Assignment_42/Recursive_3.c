///////////////////////////////////////////////////////
//
//  File name :     Recursive_3
//  Description:    Write a recursive program which accept string from user and count number of characters.
//  Author :        Trupti Bhatlekar
//  Date :          23/07/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Input: Hello World
// Output: 10 
///////////////////////////////////////////////////////

#include <stdio.h>

int Strlen(char *str)
{
  if (*str == '\0')
  {
    return 0;
  }

  return 1 + Strlen(str + 1);
}

int main()
{
  char arr[50];
  int iRet = 0;

  printf("Enter string: ");
  scanf("%s", arr);

  iRet = Strlen(arr);

  printf("Length is : %d\n", iRet);

  return 0;
}
