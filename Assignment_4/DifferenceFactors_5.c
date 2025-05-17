///////////////////////////////////////////////////////
//
//  File name :     DifferenceFactors_5
//  Description:    Accept number and return difference between summation of all factors and non factors.
//  Author :        Trupti Bhatlekar
//  Date :          14/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

int SumNonFact(int iNo)
{
    int i = 0;
    int iSum = 0;
    
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for (i = 1; i <= iNo; i++)
    {    
        
            iSum = iSum + iNo;
            
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