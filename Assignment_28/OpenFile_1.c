///////////////////////////////////////////////////////
//
//  File name :     openFile_1
//  Description:    Accept file name from user and open that file in read mode.
//  Author :        Trupti Bhatlekar
//  Date :          12/06/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Input: Demo.txt
// Output: File opened successfully.
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>

int main()
{
  int fd = 0;
  char Fname[20] = {'\0'};

  printf("Enter the file name to open:\n");
  scanf("%s", Fname);

  fd = open(Fname, O_RDONLY);
  if (fd == -1)
  {
    printf("Unable to open file\n");
  }
  else
  {
    printf("File opened successfully with fd %d\n",fd);
    close(fd);
  }

  return 0;

}