///////////////////////////////////////////////////////
//
//  File name :     AcceptNumber_2
//  Description:    Accept number and print number of * on screen. 
//  Author :        Trupti Bhatlekar
//  Date :          09/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    while (iNo > iCnt)
    {
        printf("*");
        iNo--;  
    }
}
int main()
{
    int iValue = 0;
    
    printf("Enter Number: ");
    scanf("%d",&iValue);

    Display(iValue);
    
    return 0;

}