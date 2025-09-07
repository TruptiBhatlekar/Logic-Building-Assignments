///////////////////////////////////////////////////////
//
//  File name :     Trace_4
//  Description:    To accept matrix from user and trace and normal of given matrix.
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

    public int Trace()
    {
        int trace = 0;

        for(int i = 0; i < Math.min(iRow, iCol); i++)
        {
            trace += Arr[i][i];
        }
        return trace;
    }

    public double Normal()
    {
        int SumSquares = 0;

        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                SumSquares += Arr[i][j] * Arr[i][j];
            }
        }
        return Math.sqrt(SumSquares);
    }
}

public class Trace_4 
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

        int trace = mobj.Trace();
        double normal = mobj.Normal();

        System.out.println("Trace of matrix = " + trace);
        System.out.println("Normal of matrix = " + normal);
    }
}