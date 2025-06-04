///////////////////////////////////////////////////////
//
//  File name :     StringCopy_4
//  Description:    Accept String and character from user return index of last occurrence of a character
//  Author :        Trupti Bhatlekar
//  Date :          01/06/2025
//
///////////////////////////////////////////////////////

//////////////////////////////////////////////////////
// Input: Marvellous Multi OS - M 
// Output: 11
// Input: Marvellous Multi OS - W
// Output: -1
// Input: Marvellous Multi OS - e
// Output: 4
///////////////////////////////////////////////////////

#include <stdio.h>

int LastChar(char *str, char ch)
{
  int i = 0;
  int pos = -1;

  while (str[i] != '\0')
  {
    if (str[i] == ch)
    {
      pos = i;
    }
    i++;
  }

  return pos;
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

  iRet = LastChar(arr, cValue);

  if (iRet != -1)
    printf("Character location is %d\n", iRet);
  else
    printf("Character not found\n");

  return 0;
}