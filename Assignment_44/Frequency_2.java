///////////////////////////////////////////////////////
//
//  File name :     Frequency_2
//  Description:    To accept matrix and one number from user and return frequency of that number.
//  Author :        Trupti Bhatlekar
//  Date :          30/07/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Input: 3 2 5 9
//        4 3 2 2 
//        8 4 1 3
//        3 9 7 5
// Number for search: 3 // Output Frequency: 4
///////////////////////////////////////////////////////

import java.util.*;

class Matrix
{
    private int Arr[][];

    public Matrix(int A, int B)
    {
        Arr = new int [A][B];
    }
    public void Accept()
    {
        System.out.println("Please enter the elements of matrix:");

        Scanner sobj = new Scanner(System.in);
        int i = 0, j = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }
    public void Display()
    {
        System.out.println("Elements of the matrix are : ");

        int i = 0, j = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }
    public int CountFrequency(int no) 
    {
        int count = 0;
        for (int[] row : Arr) 
        {
            for (int val : row) 
            {
                if (val == no) 
                {
                    count++;
                }
            }
        }
        return count;
    }
}

class Frequency_2
{
    public static void main (String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows : ");
        int iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        int iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow,iCol);

        mobj.Accept();
        mobj.Display();

        System.out.println("Enter number for search : ");
        int iNo = sobj.nextInt();
        
        int iRet = mobj.CountFrequency(iNo);
        System.out.println("Frequency of " + iNo + " is: " + iRet);
         
    }
}

