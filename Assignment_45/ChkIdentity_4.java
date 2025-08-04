///////////////////////////////////////////////////////
//
//  File name :     ChkIdentity_4
//  Description:    To accept matrix from user and check whether matrix is identify matrix or not.
//  Author :        Trupti Bhatlekar
//  Date :          30/07/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Input: 1 0 0 0
//        0 1 0 0  
//        0 0 1 0
//        0 0 0 1
// Output: True
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
    public boolean ChkIdentity()
    {
        int iRow = Arr.length;
        int iCol = Arr[0].length;

        if(iRow != iCol)
        {
             return false;
        }

        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                if(i == j && Arr[i][j] != 1)
                {
                    return false;
                }
                    
                else if(i != j && Arr[i][j] != 0)
                {
                    return false;
                }
            }
        }
        return true;
    }
}

class ChkIdentity_4
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
        
        boolean bRet = mobj.ChkIdentity();

        if(bRet)
        {
            System.out.println("Matrix is Identity Matrix");
        }
        else
        {
            System.out.println("Matrix is not Identity Matrix");
        }
    }
}