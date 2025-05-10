///////////////////////////////////////////////////////
//
//  File name :     DisplayEvenFactor_3
//  Description:    Accept number and display even factors of number.
//  Author :        Trupti Bhatlekar
//  Date :          10/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

void DisplayEvenFactor(int iNo)
{
    int iCnt = 0;
    
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt == 0) && (iCnt % 2 == 0))
        {
            printf("%d ",iCnt);
        }
    }    
}

int main()
{
    int iValue = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    DisplayEvenFactor(iValue);

    return 0;

}