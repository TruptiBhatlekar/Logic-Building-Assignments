///////////////////////////////////////////////////////
//
//  File name :     Transpose_3
//  Description:    To accept matrix from user and return its transpose matrix.
//  Author :        Trupti Bhatlekar
//  Date :          30/08/2025
//
///////////////////////////////////////////////////////

import java.util.*;

class Matrix
{
    private int Arr[][];
    private int iRow; 
    private int iCol;

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

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }
    public void Display()
    {
        System.out.println("Elements of the matrix are : ");

        int i = 0, j = 0;

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }

    public int [][] Transpose()
    {
        int[][] trans = new int[iCol][iRow];   // swapped dimensions

        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                trans[j][i] = Arr[i][j];   // flip indices
            }
        }
        return trans;
    }

    public void DisplayX(int [][]trans)
    {
        System.out.println("Transpose of the matrix are : ");

        int i = 0, j = 0;

        for(i = 0; i < trans.length; i++)
        {
            for(j = 0; j < trans[i].length; j++)
            {
                System.out.print(trans[i][j]+"\t");
            }
            System.out.println();
        }
    }
}
public class Transpose_3 
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows:");
        int iRow = sobj.nextInt();

        System.out.println("Enter number of columns:");
        int iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow, iCol);
        mobj.Accept();
        mobj.Display();

        int[][] trans = mobj.Transpose();

        mobj.DisplayX(trans);
    }
}