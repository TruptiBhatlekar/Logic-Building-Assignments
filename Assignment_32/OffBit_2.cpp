///////////////////////////////////////////////////////
//
//  File name :     OffBit_2
//  Description:    Accept one number and position fro user and OFF that bit.Return modified number.
//  Author :        Trupti Bhatlekar
//  Date :          21/06/2025
//
///////////////////////////////////////////////////////

#include <iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo, UINT iPos)
{
  UINT iMask = 1;
  UINT iResult = 0;

  if (iPos < 1 || iPos > 32)
  {
    cout<<"Invalid position\n";
    return iNo;
  }

  iMask = iMask << (iPos - 1);
  iMask = ~iMask;
  iResult = iNo & iMask;

  return iResult;
}

int main()
{
  UINT iValue = 0, iLocation = 0, iRet = 0;

  cout<<"Enter number : \n";
  cin>>iValue;

  cout<<"Enter the position : \n";
  cin>>iLocation;

  iRet = OffBit(iValue, iLocation);

  cout<<"Updated number is : "<<iRet << "\n";

  return 0;
}