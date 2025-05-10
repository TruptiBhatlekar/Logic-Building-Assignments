///////////////////////////////////////////////////////
//
//  File name :     AcceptPrint_5
//  Description:    Accept number and print number of * on screen. 
//  Author :        Trupti Bhatlekar
//  Date :          08/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void Accept (int iNo)
{
    int iCnt = 0;
    
    for (iCnt=1; iCnt<=iNo; iCnt++)
    {
        printf("*\n");
    }
}

int main()
{
    int iValue = 0;
    iValue = 5;

    printf("Enter your number: ");
    scanf("%d", &iValue);

    Accept(iValue);
    
    return 0;
    
}