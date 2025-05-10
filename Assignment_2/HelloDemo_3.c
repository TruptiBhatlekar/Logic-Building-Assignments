///////////////////////////////////////////////////////
//
//  File name :     HelloDemo_3
//  Description:    Accept number from user and if number is less than 10 then print "Hello" otherwise print "Demo" 
//  Author :        Trupti Bhatlekar
//  Date :          09/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)
{
    if(iNo <=10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;

}