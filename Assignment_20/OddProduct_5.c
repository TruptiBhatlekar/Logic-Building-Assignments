///////////////////////////////////////////////////////
//
//  File name :     OddProduct_5
//  Description:    Accept N number from user and return product of all odd elements.
//  Author :        Trupti Bhatlekar
//  Date :          30/05/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Input: N: 6, Elements: 15 66 3 70 10 88
// Output: 45
// Input: N: 6, Elements: 44 66 72 70 10 88
// Output: 0
///////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int Product(int Arr[], int iLength)
{
  int i = 0, iProduct = 1;
  int hasOdd = 0;

  for (i = 0; i < iLength; i++)
  {
    if (Arr[i] % 2 != 0)
    {
      iProduct *= Arr[i];
      hasOdd = 1;
    }
  }

  if (hasOdd == 0)
  {
    return 0;
  }

  return iProduct;
}

int main()
{
  int iSize = 0, iRet = 0, iCnt = 0;
  int *p = NULL;

  printf("Enter number of elements: ");
  scanf("%d", &iSize);

  p = (int *)malloc(iSize * sizeof(int));
  if (p == NULL)
  {
    printf("Unable to allocate memory\n");
    return -1;
  }

  printf("Enter %d elements:\n", iSize);
  for (iCnt = 0; iCnt < iSize; iCnt++)
  {
    printf("Enter element %d: ", iCnt + 1);
    scanf("%d", &p[iCnt]);
  }

  iRet = Product(p, iSize);
  printf("Product of odd elements is: %d\n", iRet);

  free(p);
  return 0;
}