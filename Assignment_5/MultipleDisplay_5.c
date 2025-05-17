///////////////////////////////////////////////////////
//
//  File name :     MultipleDisplay_5
//  Description:    Accept N and print first 5 multiplies of N.
//  Author :        Trupti Bhatlekar
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int i = 0;

    for (i = 1; i <= iNo; i++)
    {
        if (i % 5 == 0)
        {
            printf("%d", i);
        }
    }
}

int main()
{
    int iValue = 0; 
    
    printf("Enter number: ");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);

    return 0;

}