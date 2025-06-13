///////////////////////////////////////////////////////
//
//  File name :     CountSmall_2
//  Description:    Accept file name from user and count small characters from file.
//  Author :        Trupti Bhatlekar
//  Date :          13/06/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Input: Demo.txt
// Output: Number of small characters are 17.
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>
#include<io.h>

#define BUFFER_SIZE 1024

int main()
{
    char Fname[20] = {'\0'};
    int fd = 0; int iRet = 0; int iCnt = 0;
    int iCapSmall = 0;
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
            for(iCnt = 0; iCnt < iRet; iCnt++)
            {
                if((Buffer[iCnt]>= 'a')&& (Buffer[iCnt]<= 'z'))
                {
                    iCapSmall++;
                }
            }
            
            memset(Buffer,'\0',BUFFER_SIZE);
        }
        printf("Number of small characters are: %d\n", iCapSmall);
    }

    return 0;
}