///////////////////////////////////////////////////////
//
//  File name :     Check_2
//  Description:    Accept number from user and return the smallest number. 
//  Author :        Trupti Bhatlekar
//  Date :          01/06/2025
//
///////////////////////////////////////////////////////
// Input: N: 6, Elements: 66 35 69 66 30 37
// Output: 30 
///////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int Minimum (int Arr[], int iLength)
{
    int iMin = Arr[0];  
    for(int i = 1; i < iLength; i++)
    {
        if(Arr[i] < iMin)
        {
            iMin = Arr[i];
        }
    }
    return iMin;
}

int main()
{
    int iSize = 0; int iRet = 0; int iCnt = 0; 
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
        printf("Enter elements:\n");
        scanf("%d",&p[iCnt]);
    }
    iRet = Minimum(p, iSize);
    {
        printf("smallest number is %d\n", iRet);
    }  
    free(p);

    return 0;
}