///////////////////////////////////////////////////////
//
//  File name :     MultiplicationFactor_1
//  Description:    Accept number and display its multiplication factors. 
//  Author :        Trupti Bhatlekar
//  Date :          14/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

int MultFact(int iNo)
{
    int i = 0;
        
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for (i = 1; i<= iNo; i++)
    {
        if((iNo % i == 0)&&(i& 1 ==0))
        {
            printf("%d ",i);
        }

    } 
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter Number: ");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("%d",iRet);

    return 0;
}