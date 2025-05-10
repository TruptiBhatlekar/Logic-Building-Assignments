///////////////////////////////////////////////////////
//
//  File name :     DisplayFactor_2
//  Description:    Accept number and display even factors of number. 
//  Author :        Trupti Bhatlekar
//  Date :          10/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

void DisplayFactor(int iNo)
{
    int i = 0;
    
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for (i = 1; i <= iNo; i++)
    {
        if((iNo % i == 0) && (i % 1 == 0))
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

    DisplayFactor(iValue);

    return 0;

}