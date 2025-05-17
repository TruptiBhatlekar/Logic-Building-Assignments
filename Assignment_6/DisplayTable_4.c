///////////////////////////////////////////////////////
//
//  File name :     DisplayTable_4
//  Description:    Accept N and display its table.
//  Author :        Trupti Bhatlekar
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void Table(int iNo)
{
    int i = 0;

   for (i = 1; i <= 10; i++)
    {
        printf("%d ", iNo * i);
    }
}

int main()
{
    int iValue = 0; 
    
    printf("Enter number: ");
    scanf("%d", &iValue);

    Table(iValue);

    return 0;

}