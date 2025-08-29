///////////////////////////////////////////////////////
//
//  File name :     Pattern_4
//  Description:    To accept number of rows and number of column from user and display pattern.
//  Author :        Trupti Bhatlekar
//  Date :          29/08/2025
//
///////////////////////////////////////////////////////

//////////////////////////////////////////////////////
// Input: iRow = 4, iCol = 5
// Output: 4 4 4 4 4
//         3 3 3 3 3
//         2 2 2 2 2
//         1 1 1 1 1
///////////////////////////////////////////////////////

import java.util.*;

class Pattern
{
    public void Pattern(int iRow, int iCol)
    {
        int i = 0; int j = 0;
        
        for(i = iRow; i >= 1; i--)  
        {           
            for(j = 1; j <= iCol; j++)   
            {
                System.out.print(i + " ");
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

        System.out.print("Enter number of rows: ");
        int iRow = sc.nextInt();

        System.out.print("Enter number of columns: ");
        int iCol = sc.nextInt();

        Pattern pobj = new Pattern();
        pobj.Pattern(iRow, iCol);
        
    }
}