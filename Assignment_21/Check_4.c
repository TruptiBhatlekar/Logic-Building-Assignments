///////////////////////////////////////////////////////
//
//  File name :     Check_4
//  Description:    Accept number from user and display all such numbers which contains 3 digits in it. 
//  Author :        Trupti Bhatlekar
//  Date :          01/06/2025
//
///////////////////////////////////////////////////////
// Input: N: 6, Elements: 82 25 665 33 710 3008
// Output: 665 710  
///////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void Digits (int Arr[], int iLength)
{
    for (int i = 0; i < iLength; i++)
    {
        if ((Arr[i]) >= 100 && (Arr[i] <= 999))
        {
            printf("%d ", Arr[i]);
        }
    }
    printf("\n");

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
        printf("Enter %d elements: ", iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    Digits(p, iSize);
       
    free(p);

    return 0;
}