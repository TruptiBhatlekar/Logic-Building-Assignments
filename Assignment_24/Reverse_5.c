///////////////////////////////////////////////////////
//
//  File name :     Reverse_5
//  Description:    Accept String from user and display it in reverse order.
//  Author :        Trupti Bhatlekar
//  Date :          01/06/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Input: Marvellous 
// Output: suollevraM
///////////////////////////////////////////////////////

#include <stdio.h>
#include <string.h>

void Reverse(char *str)
{
  int i = 0, j = strlen(str) - 1;
  char ch;

  while (i < j)
  {
    ch = str[i];
    str[i] = str[j];
    str[j] = ch;

    i++;
    j--;
  }
}

int main()
{
  char arr[20];

  printf("Enter string: ");
  scanf("%[^'\n']s", arr);

  Reverse(arr);

  printf("Reversed string: %s\n", arr);

  return 0;
}