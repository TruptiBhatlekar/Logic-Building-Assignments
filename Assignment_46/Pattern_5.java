///////////////////////////////////////////////////////
//
//  File name :     Pattern_5
//  Description:    To accept number of rows and number of column from user and display pattern.
//  Author :        Trupti Bhatlekar
//  Date :          29/08/2025
//
///////////////////////////////////////////////////////

//////////////////////////////////////////////////////
// Input: iRow = 3, iCol = 4
// Output: 1 2 3 4
//         5 6 7 8
//         9 10 11 12
///////////////////////////////////////////////////////

import java.util.*;

class Pattern
{
    public void Pattern(int iRow, int iCol)
    {
        int i = 0; int j = 0; int num = 1;
        
        for(i = 1; i <= iRow; i++)  
        {           
            for(j = 0; j < iCol; j++)   
            {
                System.out.print(num + " ");
                num++;
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

        System.out.print("Enter number of rows: ");
        int iRow = sc.nextInt();

        System.out.print("Enter number of columns: ");
        int iCol = sc.nextInt();

        Pattern pobj = new Pattern();
        pobj.Pattern(iRow, iCol);
        
    }
}