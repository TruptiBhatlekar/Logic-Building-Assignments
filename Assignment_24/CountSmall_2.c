///////////////////////////////////////////////////////
//
//  File name :     CountSmall_2
//  Description:    Accept String from user and count number of small characters.
//  Author :        Trupti Bhatlekar
//  Date :          01/06/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Input: "Marvellous"  
// Output: 9
///////////////////////////////////////////////////////

#include <stdio.h>

int CountSmall(char *str)
{
  int iCnt = 0;

  while (*str != '\0')
  {
    if ((*str >= 'a') && (*str <= 'z'))
    {
      iCnt++;
    }
    str++;
  }

  return iCnt;
}

int main()
{
  char arr[20];
  int iRet = 0;

  printf("Enter string: ");
  scanf("%[^'\n']s", arr);

  iRet = CountSmall(arr);

  printf("%d\n", iRet);

  return 0;
}