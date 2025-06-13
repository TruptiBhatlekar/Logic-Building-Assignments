///////////////////////////////////////////////////////
//
//  File name :     String_5
//  Description:    Accept file name and one string from user and write that string at the end of file. 
//  Author :        Trupti Bhatlekar
//  Date :          12/06/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Input: Demo.txt  Hello World
// Output: Write Hello World at the end of Demo.txt file. 
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
  char Data[100] = {'\0'};

  printf("Enter the file name to append to:\n");
  scanf("%s", Fname);

  printf("Enter the string to write at end of file:\n");
  scanf(" %[^\n]s", Data);

  fd = open(Fname, O_WRONLY | O_APPEND);
  if (fd == -1)
  {
    printf("Unable to open file\n");
    return -1;
  }

  write(fd, Data, strlen(Data));
  write(fd, "\n", 1);

  printf("Write '%s' at the end of %s file\n", Data, Fname);
  close(fd);

  return 0;
}