///////////////////////////////////////////////////////
//
//  File name :     PrintLine3_3
//  Description:    Accept number and print its number line.
//  Author :        Trupti Bhatlekar
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int i = 0;

    for (i = -iNo; i <= iNo; i++)
    {
        if (i % 1 == 0)
        {
            printf("%d",i);
        }
    }
}

int main()
{
    int iValue = 0; 
    
    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;

}