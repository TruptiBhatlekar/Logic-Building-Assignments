///////////////////////////////////////////////////////
//
//  File name :     LastOccur_3
//  Description:    Accept N number from user and accept another number as NO, return index of last occurance.
//  Author :        Trupti Bhatlekar
//  Date :          30/05/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Input: N: 6, No: 66, Elements: 85 66 3 66 93 88
// Output: 3
// Input: N: 6, No: 12, Elements: 85 11 37 6 30 8
// Output: -1       
///////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int FirstOcc(int Arr[], int iLength, int iNo)
{
  int i = 0;
  for (i = 0; i < iLength; i++)
  {
    if (Arr[i] == iNo)
    {
      return i; 
    }
  }
  return -1; 
}

int main()
{
  int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
  int *p = NULL;

  printf("Enter number of elements: ");
  scanf("%d", &iSize);

  printf("Enter the number to search: ");
  scanf("%d", &iValue);

  p = (int *)malloc(iSize * sizeof(int));
  if (p == NULL)
  {
    printf("Unable to allocate memory");
    return -1;
  }

  printf("Enter %d elements:\n", iSize);
  for (iCnt = 0; iCnt < iSize; iCnt++)
  {
    printf("Enter element %d: ", iCnt + 1);
    scanf("%d", &p[iCnt]);
  }

  iRet = FirstOcc(p, iSize, iValue);

  if (iRet == -1)
  {
    printf("There is no such number\n");
  }
  else
  {
    printf("Last occurrence of number is %d\n", iRet);
  }

  free(p);
  return 0;
}