///////////////////////////////////////////////////////
//
//  File name :     Pattern_2
//  Description:    Accept number of rows and columns from user and display pattern. 
//  Author :        Trupti Bhatlekar
//  Date :          25/05/2025
//
///////////////////////////////////////////////////////
// Input: 4 4 
// Output: A B C D
//         a b c d
//         A B C D
//         a b c d          
///////////////////////////////////////////////////////

#include <stdio.h>

void Pattern (int iRow, int iCol)
{
    int i = 0; int j = 0;

    for (i = 1; i <= iCol; i++)
    {
        for (j = 0; j < iRow; j++)
        {
                if(( i % 2) == 0)
            {
                printf("%c\t", 'a'+j);
            }
            else
            {
                printf("%c\t", 'A'+j);   
            }
        }
    printf("\n");
    }
}    

int main()
{
    int iValue1 = 0; 
    int iValue2 = 0;

    printf("Enter number of rows: \n");
    scanf("%d", &iValue1);

    printf("Enter number of columns: \n");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}