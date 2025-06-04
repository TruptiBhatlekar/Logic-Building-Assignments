///////////////////////////////////////////////////////
//
//  File name :     Check_3
//  Description:    Accept number from user and return the difference between smallest and largest number. 
//  Author :        Trupti Bhatlekar
//  Date :          01/06/2025
//
///////////////////////////////////////////////////////
// Input: N: 6, Elements: 85 66 3 66 93 88
// Output: 90 (90-3)  
///////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int Difference (int Arr[], int iLength, int iValue)
{
    int iMin = Arr[0];
    int iMax = Arr[0];

    for (int i = 1; i < iLength; i++)
    {
        if (Arr[i] < iMin)
            iMin = Arr[i];
        if (Arr[i] > iMax)
            iMax = Arr[i];
    }
    return (iMax - iMin);
}

int main()
{
    int iSize = 0; int iRet = 0; int iCnt = 0; int iValue = 0;
    int *p = NULL;
    
    printf("Enter number of elements: ");
    scanf("%d",&iSize);

    p = (int*) malloc(iSize * sizeof (int));
    if (p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter %d elements: ", iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet = Difference(p, iSize, iValue);
    {
        printf("difference is %d", iRet);
    }
         
    free(p);

    return 0;
}