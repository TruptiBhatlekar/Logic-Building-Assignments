///////////////////////////////////////////////////////
//
//  File name :     NonFactors_3
//  Description:    Accept number and display all its non factors.
//  Author :        Trupti Bhatlekar
//  Date :          14/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

void NonFact(int iNo)
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
    
    printf("Enter Number: ");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;

}