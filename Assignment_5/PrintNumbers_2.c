///////////////////////////////////////////////////////
//
//  File name :     PrintNumbers_2
//  Description:    Accept number and print that number still that number.
//  Author :        Trupti Bhatlekar
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

int Display(int iNo)
{
    int i = 0;
       
    for (i = 1; i <= iNo; i++)
    {
        printf("%d",i);     
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