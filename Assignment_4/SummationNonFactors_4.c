///////////////////////////////////////////////////////
//
//  File name :     SummationNonFactors_4
//  Description:    Accept number and return summation of all its non factors
//  Author :        Trupti Bhatlekar
//  Date :          14/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

int SumNonFact(int iNo)
{
    int i = 0;
    
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for (i = 1; i <= iNo; i++)
    {
        if(iNo % i == 0)
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

    iRet = SumNonFact(iValue);
    printf("%d", iRet);

    return 0;
}