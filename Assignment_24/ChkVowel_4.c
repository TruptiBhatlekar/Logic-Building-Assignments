///////////////////////////////////////////////////////
//
//  File name :     ChkVowel_4
//  Description:    Accept String from user and check whether it contains vowels in it or not.
//  Author :        Trupti Bhatlekar
//  Date :          01/06/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Input: "MarvellouS"  
// Output: 6 (8-2)
///////////////////////////////////////////////////////

#include <stdio.h>

int Difference(char *str)
{
  int iSmall = 0;
  int iCapital = 0;

  while (*str != '\0')
  {
    if ((*str >= 'A') && (*str <= 'Z'))
    {
      iCapital++;
    }
    else if ((*str >= 'a') && (*str <= 'z'))
    {
      iSmall++;
    }
    str++;
  }

  return iSmall - iCapital;
}

int main()
{
  char arr[20];
  int iRet = 0;

  printf("Enter string: ");
  scanf("%[^'\n']s", arr);

  iRet = Difference(arr);

  printf("%d\n", iRet);

  return 0;
}