///////////////////////////////////////////////////////
//
//  File name :     CreateFile_2
//  Description:    Accept file name from user and create that file.
//  Author :        Trupti Bhatlekar
//  Date :          12/06/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Input: Demo.txt
// Output: File created successfully.
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

  printf("Enter the file name to create:\n");
  scanf("%s", Fname);

  fd = creat(Fname, 0777);
  if (fd == -1)
  {
    printf("Unable to create file\n");
  }
  else
  {
    printf("File created successfully.\n");
    close(fd);
  }

  return 0;
}