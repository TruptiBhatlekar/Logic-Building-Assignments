///////////////////////////////////////////////////////
//
//  File name :     Pattern_2
//  Description:    To accept number of rows and number of column from user and display pattern.
//  Author :        Trupti Bhatlekar
//  Date :          29/08/2025
//
///////////////////////////////////////////////////////

//////////////////////////////////////////////////////
// Input: iRow = 4, iCol = 4
// Output: A B C D
//         a b c d
//         A B C D
//         a b c d
///////////////////////////////////////////////////////

import java.util.*;

class Pattern
{
    public void Pattern(int iRow, int iCol)
    {
        int i = 0; int j = 0;

        for(i = 1; i <= iRow; i++)  
        {
            char ch;
            if(i % 2 == 0) 
            {
                ch = 'a';
            } 
            else            
            {
                ch = 'A';
            }
            for(j = 1; j <= iCol; j++)   
            {
                System.out.print(ch + " ");
                ch++;
            }
            System.out.println();  
        }
    }
}

class Pattern_2
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