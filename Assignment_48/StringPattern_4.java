///////////////////////////////////////////////////////
//
//  File name :     StringPattern_4
//  Description:    To accept string from user and display pattern.
//  Author :        Trupti Bhatlekar
//  Date :          29/08/2025
//
///////////////////////////////////////////////////////

//////////////////////////////////////////////////////
// Input: Hello, iRow = 9
// Output: H e l l o
//         H e l l 
//         H e l 
//         H e 
//         H
//         H e  
//         H e l 
//         H e l l 
//         H e l l o
///////////////////////////////////////////////////////

import java.util.*;

class Pattern
{
    public void Pattern(String str, int iRow)
    {
        int iHalf = iRow / 2;

        for(int i = 0; i <= iHalf; i++)  
        {
            for(int j = 0; j < str.length() - i; j++)   
            {
                System.out.print(str.charAt(j) + " ");
            }
            System.out.println();
        }
        for(int i = iHalf - 1; i >= 0; i--)  
        {
            for(int j = 0; j < str.length() - i; j++)   
            {
                System.out.print(str.charAt(j) + " ");
            }
            System.out.println();
        }
    }
}

class StringPattern_4
{
    public static void main (String A[])
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String str = sc.nextLine();

        System.out.print("Enter number of rows: ");
        int iRow = sc.nextInt();

        Pattern pobj = new Pattern();
        pobj.Pattern(str,iRow);
        
    }
}