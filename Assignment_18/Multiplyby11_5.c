///////////////////////////////////////////////////////
//
//  File name :     Multiplyby11_5
//  Description:    Accept number from user and display elements which are even and divisible by 5. 
//  Author :        Trupti Bhatlekar
//  Date :          31/05/2025
//
///////////////////////////////////////////////////////
// Input: N: 6, Elements: 85 66 3 55 93 88
// Output: 66 55 88     
///////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void Display(int Arr[], int iLength)
{
    int iCount = 0;
    for (int i = 0; i < iLength; i++)
    {
        if (Arr[i] % 11 == 0)
        {
            printf("%d ", Arr[i]);
            iCount++;
        }
    }

    if (iCount == 0)
    {
        printf("None");
    }
    printf("\nTotal matching elements: %d\n", iCount);
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

    printf("Elements that are multiples of 11 are:\n");
    Display(p, iSize);

    free(p);
    return 0;
}