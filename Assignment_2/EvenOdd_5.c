///////////////////////////////////////////////////////
//
//  File name :     EvenOdd_5
//  Description:    Accept number and check number is even or odd. 
//  Author :        Trupti Bhatlekar
//  Date :          09/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        printf("Even");
        return TRUE;
    }
    else
    {
        printf("Odd");
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    bRet = ChkEven(iValue);
      
    return 0;

}