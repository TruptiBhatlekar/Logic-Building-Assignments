///////////////////////////////////////////////////////
//
//  File name :     CheckNumber_1
//  Description:    Accept N number from user and accept another number as NO, check whether NO is present or not.
//  Author :        Trupti Bhatlekar
//  Date :          30/05/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Input: N: 6, No: 66, Elements: 66 35 69 66 30 37
// Output: TRUE
// Input: N: 6, No: 12, Elements: 85 11 37 6 30 8
// Output: FALSE       
///////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check (int Arr[], int iLength, int iNo)
{
    for (int i = 0; i < iLength; i++)
    {
        if(Arr[i] == iNo)
        {
            return TRUE;
        }
    }
    return FALSE;
}

int main()
{
    int iSize = 0; int iCnt = 0; int iValue = 0; int iLength = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

    printf("Enter number of elements: ");
    scanf("%d",&iSize);

    printf("Enter the number: ");
    scanf("%d", &iValue);

    p = (int*) malloc(iSize * sizeof (int));
    if (p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter %d elements:\n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d",&p[iCnt]);
    }
    
    bRet = Check(p, iSize, iValue);
    if (bRet == TRUE)
    {
        printf("Number is present");
    }
    else
    {
        printf("Number is not present");
    }

    free(p);

    return 0;
}