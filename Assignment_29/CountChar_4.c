///////////////////////////////////////////////////////
//
//  File name :     CountChar_4
//  Description:    Accept file name and one character from user and counts number of occurrences of that character from that file.
//  Author :        Trupti Bhatlekar
//  Date :          13/06/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Input: Demo.txt, C
// Output: Frequency of C is 2
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>
#include<io.h>

#define BUFFER_SIZE 1024

int CountChar(char FName[], char Ch)
{
  int fd = 0, iRet = 0, iCnt = 0, iCount = 0;
  char Buffer[BUFFER_SIZE] = {'\0'};

  fd = open(FName, O_RDONLY);
  if (fd == -1)
  {
    printf("Unable to open file.\n");
    return -1;
  }

  while ((iRet = read(fd, Buffer, BUFFER_SIZE)) > 0)
  {
    for (iCnt = 0; iCnt < iRet; iCnt++)
    {
      if (Buffer[iCnt] == Ch)
      {
        iCount++;
      }
    }
  }

  close(fd);
  return iCount;
}

int main()
{
  char FileName[30];
  char cValue;
  int iRet = 0;

  printf("Enter file name: ");
  scanf("%s", FileName);

  printf("Enter the character: ");
  scanf(" %c", &cValue);

  iRet = CountChar(FileName, cValue);

  printf("Frequency of %c is %d\n", cValue, iRet);

  return 0;
}