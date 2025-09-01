///////////////////////////////////////////////////////
//
//  File name :     StringPattern_5
//  Description:    To accept string from user and display pattern.
//  Author :        Trupti Bhatlekar
//  Date :          29/08/2025
//
///////////////////////////////////////////////////////

//////////////////////////////////////////////////////
// Input: Hello
// Output: H # # # #
//         H e # # # 
//         H e l # # 
//         H e l l #
//         H e l l o
//         H e l l #
//         H e l # # 
//         H e # # # 
//         H # # # #
///////////////////////////////////////////////////////

import java.util.*;

class Pattern
{
    public void Pattern(String str)
    {
        int iLen = str.length();

        for(int i = 0; i < iLen; i++)  
        {
            for(int j = 0; j < iLen; j++)   
            {
                if(j <= i)
                {
                    System.out.print(str.charAt(j) + " ");
                }
                else
                {
                    System.out.print("# ");
                }
            }
            System.out.println();
        }

        for (int i = iLen - 2; i >= 0; i--)
        {
            for (int j = 0; j < iLen; j++)
            {
                if (j <= i)
                {
                    System.out.print(str.charAt(j) + " ");
                }
                else
                {
                    System.out.print("# ");
                }
            }
            System.out.println();
        }
    }
}

class StringPattern_5
{
    public static void main (String A[])
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String str = sc.nextLine();

        Pattern pobj = new Pattern();
        pobj.Pattern(str);
        
    }
}