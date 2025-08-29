///////////////////////////////////////////////////////
//
//  File name :     StringPattern_1
//  Description:    To accept string from user and display pattern.
//  Author :        Trupti Bhatlekar
//  Date :          29/08/2025
//
///////////////////////////////////////////////////////

//////////////////////////////////////////////////////
// Input: Hello, iRow = 4
// Output: H e l l o
//         H e l l o
//         H e l l o
//         H e l l o
///////////////////////////////////////////////////////

import java.util.*;

class Pattern
{
    public void Pattern(String str, int iRow)
    {
        for(int i = 1; i <= iRow; i++)  
        {
            for(int j = 0; j < str.length(); j++)   
            {
                System.out.print(str.charAt(j) + " ");
            }
            System.out.println();
        }
    }
}

class StringPattern_1
{
    public static void main (String A[])
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String str = sc.nextLine();

        System.out.print("Enter number of rows: ");
        int iRow = sc.nextInt();

        Pattern pobj = new Pattern();
        pobj.Pattern(str, iRow);
        
    }
}