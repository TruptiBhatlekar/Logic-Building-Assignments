///////////////////////////////////////////////////////
//
//  File name :     KmToMtr_3
//  Description:    Accept distance in kilometer and convert it into meter.
//  Author :        Trupti Bhatlekar
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

int KMtoMeter(int KM)
{
  return KM * 1000;
}

int main()
{
  int KM = 0;

  printf("Enter distance in KM:\n");
  scanf("%d", &KM);

  int iRet = KMtoMeter(KM);
  printf("Distance in meter is: %d\n", iRet);

  return 0;
}