///////////////////////////////////////////////////////
//
//  File name :     DisplaySize_4
//  Description:    Accept file name from user and display size of file.
//  Author :        Trupti Bhatlekar
//  Date :          12/06/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Input: Demo.txt
// Output: File size is 56 bytes.
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>

#define BUFFER_SIZE 1024    // USER DEFINED MACRO

int main()
{
    char Fname[20] = {'\0'};
    int fd = 0; int iRet = 0; int iSum = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    printf("Enter the file name that you want to open: \n");
    scanf("%s", Fname);

    fd = open(Fname, O_RDONLY);    
    if(fd == -1)
    {
        printf("Unable to open the file: \n");
    }
    else
    {
      printf("File is succesfully open with fd: %d\n", fd);

      while((iRet = read(fd,Buffer,BUFFER_SIZE))!= 0)
      {
        iSum = iSum + iRet;
      }
        
      printf("File Size is : %d bytes\n", iSum);
    }
            
    return 0;
}