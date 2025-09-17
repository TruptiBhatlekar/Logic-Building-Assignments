///////////////////////////////////////////////////////
//
//  File name :     MyArray_4
//  Description:    To accept two arrays from user and form new array which is combination of first and second array.
//  Author :        Trupti Bhatlekar
//  Date :          14/09/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Input:  12 57 28 3
//         99 23 54 58 6 67
// Output: 12 57 28 3 99 23 54 58 6 67
///////////////////////////////////////////////////////

import java.util.*;

class ArrayX
{
    private int Arr[];

    public ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter elements:");
        for (int i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }
    }

    public int[] getArray()
    {
        return Arr;
    }

    public static int[] ArrayConcate(ArrayX obj1, ArrayX obj2)
    {
        int arr1[] = obj1.getArray();
        int arr2[] = obj2.getArray();
        int iSize1 = arr1.length;
        int iSize2 = arr2.length;

        int Comb[] = new int[iSize1 + iSize2];

        for (int i = 0; i < iSize1; i++)
        {
            Comb[i] = arr1[i];
        }
    
        for (int j = 0; j < iSize2; j++)
        {
            Comb[iSize1 + j] = arr2[j];
        }

        return Comb;
    }

    public static void Display(int Arr[])
    {
        for (int i = 0; i < Arr.length; i++)
        {
            System.out.print(Arr[i] + " ");
        }
        System.out.println();
    }
}

public class MyArray_4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
               
        System.out.print("Enter size of first array: ");
        int iSize1 = sobj.nextInt();
        ArrayX obj1 = new ArrayX(iSize1);
        obj1.Accept();

        System.out.print("Enter size of second array: ");
        int iSize2 = sobj.nextInt();
        ArrayX obj2 = new ArrayX(iSize2);
        obj2.Accept();

        int iRet[] = ArrayX.ArrayConcate(obj1, obj2); 

        System.out.println("\nCombined array:");
        ArrayX.Display(iRet);
    }
}