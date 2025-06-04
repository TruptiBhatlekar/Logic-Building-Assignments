///////////////////////////////////////////////////////
//
//  File name :     StringCopy_3
//  Description:    Accept String and character from user and return index of first occurrence of a character
//  Author :        Trupti Bhatlekar
//  Date :          01/06/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Input: Marvellous Multi OS - M 
// Output: 0
// Input: Marvellous Multi OS - W
// Output: -1
///////////////////////////////////////////////////////

#include <stdio.h>

int FirstChar(char *str, char ch)
{
  int i = 0;
  while (str[i] != '\0')
  {
    if (str[i] == ch)
    {
      return i;
    }
    i++;
  }
  return -1; 
}

int main()
{
  char arr[50];
  char cValue;
  int iRet = 0;

  printf("Enter string: ");
  scanf(" %[^\n]s", arr);

  printf("Enter the character: ");
  scanf(" %c", &cValue);

  iRet = FirstChar(arr, cValue);

  if (iRet != -1)
    {
      printf("Character location is %d\n", iRet);
    }
  else
    {
      printf("Character not found\n");
    }

  return 0;
}