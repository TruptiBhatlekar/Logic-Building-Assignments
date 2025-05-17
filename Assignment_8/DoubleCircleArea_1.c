///////////////////////////////////////////////////////
//
//  File name :     DoubleCircleArea1
//  Description:    Accept radius from circle and calculate its area. 
//  Author :        Trupti Bhatlekar
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

double CircleArea(double Radius)
{
  return 3.14 * Radius * Radius;
}

int main()
{
  float fValue = 0.0;

  printf("Enter the radius: ");
  scanf("%f", &fValue);

  double dRet = CircleArea(fValue);
  printf("Area is: %f\n", dRet);

  return 0;
}