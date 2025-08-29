///////////////////////////////////////////////////////
//
//  File name :     Pattern_3
//  Description:    To accept number of rows and number of column from user and display pattern.
//  Author :        Trupti Bhatlekar
//  Date :          29/08/2025
//
///////////////////////////////////////////////////////

//////////////////////////////////////////////////////
// Input: iRow = 3, iCol = 5
// Output: A A A A A
//         B B B B B
//         C C C C C
///////////////////////////////////////////////////////

import java.util.*;

class Pattern
{
    public void Pattern(int iRow, int iCol)
    {
        int i = 0; int j = 0;
        
        for(i = 1; i <= iRow; i++)  
        {
            char ch = (char)('A' + i - 1);
            
            for(j = 1; j <= iCol; j++)   
            {
                System.out.print(ch + " ");
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

        System.out.print("Enter number of rows: ");
        int iRow = sc.nextInt();

        System.out.print("Enter number of columns: ");
        int iCol = sc.nextInt();

        Pattern pobj = new Pattern();
        pobj.Pattern(iRow, iCol);
        
    }
}