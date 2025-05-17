///////////////////////////////////////////////////////
//
//  File name :     Pattern_1
//  Description:    Accept number and print 
//  Author :        Trupti Bhatlekar
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
       
    for(int i = 1; i <= iNo; i++)
    {
        printf("*\t"); 
        printf("#\t");
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