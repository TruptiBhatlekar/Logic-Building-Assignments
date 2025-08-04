///////////////////////////////////////////////////////
//
//  File name :     ReverseCol_3
//  Description:    To accept matrix from user and reverse the contents of each column. 
//  Author :        Trupti Bhatlekar
//  Date :          30/07/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Input:  3 2 5 9
//         4 3 2 2 
//         8 4 1 9
//         3 9 7 5
// Output: 3 9 7 5
//         8 4 1 9
//         4 3 2 2 
//         3 2 5 9
///////////////////////////////////////////////////////

import java.util.*;

class Matrix
{
    private int Arr[][];
    private int iRow, iCol;

    public Matrix(int A, int B)
    {
        Arr = new int [A][B];
        iRow = A;
        iCol = B;
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

        for (i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }
    public void ReverseCol()
    {
        int top = 0;
        int bottom = Arr.length - 1;

    while (top < bottom)
    {
        int[] temp = Arr[top];
        Arr[top] = Arr[bottom];
        Arr[bottom] = temp;

        top++;
        bottom--;
    }

        System.out.println("Matrix after reversing the column content:");
        Display();
    }   
}

class ReverseCol_3
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
        
        mobj.ReverseCol();
    }
}