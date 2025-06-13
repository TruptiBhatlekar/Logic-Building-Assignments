///////////////////////////////////////////////////////
//
//  File name :     DisplayContent_3
//  Description:    Accept file name from user and reads all data and display all contents. 
//  Author :        Trupti Bhatlekar
//  Date :          12/06/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Input: Demo.txt
// Output: Display all data of file.
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>

#define BUFFER_SIZE 1024

int main()
{
  int fd = 0, iRet = 0;
  char Fname[20] = {'\0'};
  char Buffer[BUFFER_SIZE] = {'\0'};

  printf("Enter the file name to read:\n");
  scanf("%s", Fname);

  fd = open(Fname, O_RDONLY);
  if (fd == -1)
  {
    printf("Unable to open file\n");
    return -1;
  }

  while ((iRet = read(fd, Buffer, BUFFER_SIZE)) > 0)
  {
    write(1, Buffer, iRet);
    memset(Buffer, '\0', BUFFER_SIZE);
  }

  close(fd);
  return 0;
}