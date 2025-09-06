///////////////////////////////////////////////////////
//
//  File name :     Pattern_3
//  Description:    To accept row and column from user and display pattern.
//  Author :        Trupti Bhatlekar
//  Date :          29/08/2025
//
///////////////////////////////////////////////////////

//////////////////////////////////////////////////////
// Input: iRow = 6; iCol = 6
// Output: * * * * * *
//         *       * *
//         *     *   *
//         *   *     *
//         * *       *
//         * * * * * *  
///////////////////////////////////////////////////////

import java.util.*;

class DisplayPattern
{
    public void DisplayPattern(int iRow, int iCol)
    {
        for (int i = 0; i < iRow; i++) 
        {
            for (int j = 0; j < iCol; j++) 
            {
                if (i == 0 || i == iRow - 1 || j == 0 || j == iRow - 1 || i + j == iRow - 1)
                {
                    System.out.print("* ");
                }  
                else 
                {
                    System.out.print("  ");
                }        
            }
            System.out.println();
        }
    }
}

class Pattern_3
{
    public static void main (String A[])
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter number of Rows: ");
        int iRow = sc.nextInt();

        System.out.print("Enter number of Columns: ");
        int iCol = sc.nextInt();

        DisplayPattern pobj = new DisplayPattern();
        pobj.DisplayPattern(iRow, iCol);
    }
}