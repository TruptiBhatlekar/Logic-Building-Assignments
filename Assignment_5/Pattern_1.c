///////////////////////////////////////////////////////
//
//  File name :     Pattern_1
//  Description:    Accept number and display that number of $ and * on screen.
//  Author :        Trupti Bhatlekar
//  Date :          14/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int i = 0;
  for (i = 1; i <= iNo; i++)
{
    {
      printf("$*");
    }
}
}

int main()
{
    int iValue = 0; 

    printf("Enter number: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;

}