///////////////////////////////////////////////////////
//
//  File name :     DisplayN_5
//  Description:    Accept file name and one count from user and reads that number of characters from starting position.
//  Author :        Trupti Bhatlekar
//  Date :          13/06/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Input: Demo.txt, 12
// Output: Display first 12 characters from Demo.txt
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>
#include<io.h>

#define MAX_BUFFER 1024

void DisplayN(char FName[], int iSize)
{
  int fd = 0, iRet = 0;
  char Buffer[MAX_BUFFER] = {'\0'};

  fd = open(FName, O_RDONLY);
  if (fd == -1)
  {
    printf("Unable to open file.\n");
    return;
  }

  iRet = read(fd, Buffer, iSize);
  if (iRet == -1)
  {
    printf("Unable to read from file.\n");
    close(fd);
    return;
  }

  write(1, Buffer, iRet); 

  close(fd);
}

int main()
{
  char FileName[30];
  int iValue = 0;

  printf("Enter file name: ");
  scanf("%s", FileName);

  printf("Enter the number of characters: ");
  scanf("%d", &iValue);

  DisplayN(FileName, iValue);

  return 0;
}