///////////////////////////////////////////////////////
//
//  File name :     Divisibleby5_2
//  Description:    Accept number from user and display elements which are divisible by 5.
//  Author :        Trupti Bhatlekar
//  Date :          31/05/2025
//
///////////////////////////////////////////////////////
// Input: N: 6, Elements: 85 66 3 80 93 88
// Output: 85 80     
///////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void Display(int Arr[], int iLength)
{
  int i = 0;
  int iCountDiv5 = 0;

  for (i = 0; i < iLength; i++)
  {
    if (Arr[i] % 5 == 0)
    {
      printf("%d ", Arr[i]);
      iCountDiv5++;
    }
  }

  if (iCountDiv5 == 0)
  {
    printf("None");
  }

  printf("\nTotal elements divisible by 5: %d\n", iCountDiv5);
}

int main()
{
  int iSize = 0, iCnt = 0;
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

  printf("Elements divisible by 5 are:\n");
  Display(p, iSize);

  free(p);
  return 0;
}