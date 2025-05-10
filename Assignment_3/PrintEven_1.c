///////////////////////////////////////////////////////
//
//  File name :     PrintEven_1
//  Description:    Accept one number and display number of even numbers. 
//  Author :        Trupti Bhatlekar
//  Date :          10/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 0;
    int iEven = 2;

    if(iNo <= 0)
    {
        return;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iEven);
        iEven += 2;
    }    
}

int main()
{
    int iValue = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;

}