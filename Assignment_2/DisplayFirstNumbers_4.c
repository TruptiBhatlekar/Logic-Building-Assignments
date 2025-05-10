///////////////////////////////////////////////////////
//
//  File name :     DisplayFirstNumbers_4
//  Description:    Accept two numbers and display first number in second number. 
//  Author :        Trupti Bhatlekar
//  Date :          09/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

int Display(int iNo, int iFrequency)
{
    for(int iFrequency = 0; iNo < iFrequency; iNo++);
    {
        printf("%d\n",iFrequency);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);
    
    printf("Enter Frequency: ");
    scanf("%d",&iCount);

    Display(iCount,iValue);
    
    return 0;

}