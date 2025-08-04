///////////////////////////////////////////////////////
//
//  File name :     ReverseRow_2
//  Description:    To accept matrix from user and reverse the contents of each row. 
//  Author :        Trupti Bhatlekar
//  Date :          30/07/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Input:  3 2 5 9
//         4 3 2 2 
//         8 4 1 9
//         3 9 7 5
// Output: 9 5 2 3
//         2 2 3 4
//         9 1 4 8
//         5 7 9 3 
///////////////////////////////////////////////////////

import java.util.*;

class Matrix
{
    private int Arr[][];
    private int iRow, iCol;

    public Matrix(int A, int B)
    {
        Arr = new int[A][B];
        iRow = A;
        iCol = B;
    }

    public void Accept()
    {
        System.out.println("Please enter the elements of matrix:");

        Scanner sobj = new Scanner(System.in);

        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr[i].length; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        System.out.println("Elements of the matrix are:");

        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr[i].length; j++)
            {
                System.out.print(Arr[i][j] + "\t");
            }
            System.out.println();
        }
    }

    public void ReverseRow()
    {
        for(int i = 0; i < iRow; i++)
        {
            int start = 0;
            int end = iCol - 1;

            while(start < end)
            {
                int temp = Arr[i][start];
                Arr[i][start] = Arr[i][end];
                Arr[i][end] = temp;
                start++;
                end--;
            }
        }
        System.out.println("Matrix after reversing the row content:");
        Display();
    }
}

class ReverseRow_2
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
        mobj.ReverseRow();
    }
}
