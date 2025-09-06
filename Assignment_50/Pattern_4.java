///////////////////////////////////////////////////////
//
//  File name :     Pattern_4
//  Description:    To accept row and column from user and display pattern.
//  Author :        Trupti Bhatlekar
//  Date :          29/08/2025
//
///////////////////////////////////////////////////////

//////////////////////////////////////////////////////
// Input: iRow = 6; iCol = 6
// Output: * * * * * *
//         * # # # * *
//         * # # * $ * 
//         * # * $ $ *
//         * * $ $ $ *
//         * * * * * *  
///////////////////////////////////////////////////////

import java.util.*;

class Pattern
{
    public void Pattern(int iRow, int iCol)
    {
        for (int i = 0; i < iRow; i++) 
        {
            for (int j = 0; j < iCol; j++)
            {
                if (i == 0 || i == iRow - 1 || j == 0 || j == iCol - 1 || i + j == iRow - 1)
                {
                    System.out.print("* ");
                }
                else if (j < iCol - i - 1)  // left upper triangle
                {
                    System.out.print("# ");
                }
                else if (j > iCol - i - 1)  // right upper triangle
                {
                    System.out.print("$ ");
                }
                else
                {
                    System.out.print("  "); // spaces (if needed)
                }
            }
            System.out.println();
        }
    }
}

class Pattern_4
{
    public static void main (String A[])
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter number of Rows: ");
        int iRow = sc.nextInt();

        System.out.print("Enter number of Columns: ");
        int iCol = sc.nextInt();

        Pattern pobj = new Pattern();
        pobj.Pattern(iRow, iCol);
    }
}