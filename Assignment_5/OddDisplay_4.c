///////////////////////////////////////////////////////
//
//  File name :     OddDisplay_4
//  Description:    Accept number and print that number still that number.
//  Author :        Trupti Bhatlekar
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void OddDisplay(int iNo)
{
    int i = 0;

    for (i = 1; i <= iNo; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d ",i);
        }
    }
}
int main()
{
    int iValue = 0; 
    
    printf("Enter number: ");
    scanf("%d", &iValue);

    OddDisplay(iValue);

    return 0;

}