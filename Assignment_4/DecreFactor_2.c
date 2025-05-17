///////////////////////////////////////////////////////
//
//  File name :     DecreFactor_2
//  Description:    Accept number and display its factors in decreasing factors. 
//  Author :        Trupti Bhatlekar
//  Date :          14/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

void FactRev(int iNo)
{
    int i = 0;
    
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for (i = 1; i >= iNo; i++)
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

    FactRev(iValue);
    return 0;

}