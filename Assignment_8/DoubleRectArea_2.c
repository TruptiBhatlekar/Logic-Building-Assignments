///////////////////////////////////////////////////////
//
//  File name :     DollerToRs_2
//  Description:    Accept number and print number if less than 50 print small, gretaer than 50 & less than 100 medium, greater than 100 print large.
//  Author :        Trupti Bhatlekar
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

double RectangleArea(float Width, float Height)
{
  return Width * Height;
}

int main()
{
  float Width = 0.0, Height = 0.0;

  printf("Enter Width: ");
  scanf("%f", &Width);

  printf("Enter Height: ");
  scanf("%f", &Height);

  double dRet = RectangleArea(Width, Height);
  printf("Area is: %f\n", dRet);

  return 0;
}