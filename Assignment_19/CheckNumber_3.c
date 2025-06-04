///////////////////////////////////////////////////////
//
//  File name :     CheckNumber_3
//  Description:    Accept number from user and check whether 11 is present or not in it.
//  Author :        Trupti Bhatlekar
//  Date :          26/05/2025
//
///////////////////////////////////////////////////////
// Input:N = 6, elements: 85 66 3 15 93 88
// Output: 11 is absent.
// Input:N = 6, elements: 85 11 3 15 8 50
// Output: 11 is present.
///////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(int Arr[], int iLength)
{
  int iCnt = 0;
  for (iCnt = 0; iCnt < iLength; iCnt++)
  {
    if (Arr[iCnt] == 11)
    {
      return TRUE;
    }
  }
  return FALSE;
}

int main()
{
  int iSize = 0, iCnt = 0;
  BOOL bRet = FALSE;
  int *p = NULL;

  printf("Enter number of elements: ");
  scanf("%d", &iSize);

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

  bRet = Check(p, iSize);

  if (bRet == TRUE)
    {
        printf("11 is present\n");
    }
  else
    {
        printf("11 is absent\n");
    }

  free(p);
  return 0;
}