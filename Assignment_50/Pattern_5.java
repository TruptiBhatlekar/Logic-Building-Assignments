///////////////////////////////////////////////////////
//
//  File name :     Pattern_5
//  Description:    To accept row and column from user and display pattern.
//  Author :        Trupti Bhatlekar
//  Date :          29/08/2025
//
///////////////////////////////////////////////////////

//////////////////////////////////////////////////////
// Input: iRow = 5; iCol = 5
// Output: 1 2 3 4 5
//         1 2     5
//         1   3   5
//         1     4 5
//         1 2 3 4 5
///////////////////////////////////////////////////////

import java.util.*;

class Pattern
{
    public void Pattern(int iRow, int iCol)
    {
        for (int i = 1; i <= iRow; i++)   // rows from 1..iRow
        {
            for (int j = 1; j <= iCol; j++)  // columns from 1..iCol
            {
                // Borders + diagonals
                if (i == 1 || i == iRow || j == 1 || j == iCol || i == j)
                {
                    System.out.print(j + " ");
                }
                else
                {
                    System.out.print("  "); // spaces inside
                }
            }
            System.out.println();
        }
    }
}

class Pattern_5
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