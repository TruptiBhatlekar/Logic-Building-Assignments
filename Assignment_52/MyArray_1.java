///////////////////////////////////////////////////////
//
//  File name :     MyArray_1
//  Description:    To accept two arrays from user and display contents of each array.
//  Author :        Trupti Bhatlekar
//  Date :          14/09/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Input:  2 9 7 5 2 3
//         9 3 5 5
// Output: 2 9 7 5 2 3
//         9 3 5 5
///////////////////////////////////////////////////////

import java.util.*;

public class MyArray_1 
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter size of first array: ");
        int No1 = sobj.nextInt();
        int Arr1[] = new int[No1];

        System.out.println("Enter elements of first array:");
        for (int i = 0; i < No1; i++) 
        {
            Arr1[i] = sobj.nextInt();
        }

        System.out.print("Enter size of second array: ");
        int No2 = sobj.nextInt();
        int Arr2[] = new int[No2];

        System.out.println("Enter elements of second array:");
        for (int j = 0; j < No2; j++) 
        {
            Arr2[j] = sobj.nextInt();
        }

        for (int i = 0; i < Arr1.length; i++) 
        {
            System.out.print(Arr1[i] + " ");
        }
        System.out.println();

        for (int j = 0; j < Arr2.length; j++) 
        {
            System.out.print(Arr2[j] + " ");
        }

    }
}