///////////////////////////////////////////////////////
//
//  File name :     PrintNumber_1
//  Description:    Accept number and print number if less than 50 print small, gretaer than 50 & less than 100 medium, greater than 100 print large.
//  Author :        Trupti Bhatlekar
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void Number(int iNo)
{
    if (iNo < 50)
  {
    printf("Small\n");
  }
  else if (iNo >= 50 && iNo <= 100)
  {
    printf("Medium\n");
  }
  else
  {
    printf("Large\n");
  }
}

int main()
{
    int iValue = 0; 
    
    printf("Enter number: \n");
    scanf("%d", &iValue);

    Number(iValue);

    return 0;

}