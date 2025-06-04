///////////////////////////////////////////////////////
//
//  File name :     Check_5
//  Description:    Accept number from user and display summation of digits of each number. 
//  Author :        Trupti Bhatlekar
//  Date :          01/06/2025
//
///////////////////////////////////////////////////////
// Input: N: 3, Elements: 19 37 3008
// Output: 10 10 11  
///////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void DigitSum(int Arr[], int iLength)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        int iNo = Arr[iCnt];
        int iSum = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iSum += iNo % 10;
            iNo /= 10;
        }

        printf("%d ", iSum);
    }
    printf("\n");
}

int main()
{
    int iSize = 0;
    int *p = NULL;
    
    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    p = (int*) malloc(iSize * sizeof(int));
    if (p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter %d element: ", iCnt+1);
        scanf("%d", &p[iCnt]);
    }

    DigitSum(p, iSize);

    free(p);
    return 0;
}
