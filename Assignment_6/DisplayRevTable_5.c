///////////////////////////////////////////////////////
//
//  File name :     DisplayRevTable_5
//  Description:    Accept N and display its table in reverse order.
//  Author :        Trupti Bhatlekar
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void TableRev(int iNo)
{
    int i = 0;

   for (i = 10; i>= 1; i--)
    {
        printf("%d", iNo*i);
    }
}

int main()
{
    int iValue = 0; 
    
    printf("Enter number: ");
    scanf("%d", &iValue);

    TableRev(iValue);

    return 0;

}