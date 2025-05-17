///////////////////////////////////////////////////////
//
//  File name :     DoublrFhtoCS_4
//  Description:    Accept temperature and covert into Celsius
//  Author :        Trupti Bhatlekar
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

double FhtoCs(float F)
{
  return (F - 32) * (5.0 / 9.0);
}

int main()
{
  float F = 0.0;

  printf("Enter temperature in Fahrenheit:\n");
  scanf("%f", &F);

  double dRet = FhtoCs(F);
  printf("Temperature in Celsius: %f\n", dRet);

  return 0;
}