///////////////////////////////////////////////////////
//
//  File name :     GenericTemp_1
//  Description:    Generic program to multiply two numbers.
//  Author :        Trupti Bhatlekar
//  Date :          30/06/2025
//
///////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template <class T>
T Multiply(T no1, T no2)
{
    T ans;
    ans = no1 * no2;
    return ans;
}

int main()
{
    int iRet = Multiply(10, 20);
    printf("Multiplication of elements: %d\n",iRet);

    float fRet = Multiply(10.0f, 20.0f);
    printf("Multiplication of elements: %f\n",fRet);
    
    return 0;
}