///////////////////////////////////////////////////////
//
//  File name :     CountSpaces_3
//  Description:    Accept File name from user and count white spaces from file.
//  Author :        Trupti Bhatlekar
//  Date :          13/06/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Input: Demo.txt
// Output: Number of White spaces are 7.
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>
#include<io.h>

#define BUFFER_SIZE 1024

int CountWhite(char FName[])
{
  int fd = 0, iRet = 0, iCnt = 0, iWhiteCnt = 0;
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
      if (Buffer[iCnt] == ' ')
      {
        iWhiteCnt++;
      }
    }
  }

  close(fd);
  return iWhiteCnt;
}

int main()
{
  char FileName[30];
  int iRet = 0;

  printf("Enter file name: ");
  scanf("%s", FileName);

  iRet = CountWhite(FileName);

  printf("Number of white spaces are %d\n", iRet);

  return 0;
}