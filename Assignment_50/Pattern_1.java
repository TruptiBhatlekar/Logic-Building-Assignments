///////////////////////////////////////////////////////
//
//  File name :     Pattern_1
//  Description:    To accept row and column from user and display pattern.
//  Author :        Trupti Bhatlekar
//  Date :          29/08/2025
//
///////////////////////////////////////////////////////

//////////////////////////////////////////////////////
// Input: iRow = 4; iCol = 4
// Output: * * * #
//         * * # *   
//         * # * *
//         # * * *  
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
                if (j == iCol - i - 1)
                {
                    System.out.print("# ");
                }
                    
                else
                {
                    System.out.print("* ");
                }
                    
            }
            System.out.println();
        }
    }
}

class Pattern_1
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