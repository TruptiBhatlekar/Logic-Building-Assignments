///////////////////////////////////////////////////////
//
//  File name :     CheckBit_1
//  Description:    Accept one number and position fro user and check whether bit at that position is ON or OFF. If bit is one return TRUE otherwisw return FALSE.
//  Author :        Trupti Bhatlekar
//  Date :          21/06/2025
//
///////////////////////////////////////////////////////

#include <iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo, UINT iPos)
{
  UINT iMask = 1;
  UINT iResult = 0;

  if (iPos < 1 || iPos > 32)
  {
    cout<<"Invalid position\n";
    return false;
  }

  iMask = iMask << (iPos - 1);
  iResult = iNo & iMask;

  return (iResult == iMask);
}

int main()
{
  UINT iValue = 0, iLocation = 0;
  bool bRet = false;

  cout<<"Enter number : \n";
  cin>>iValue;

  cout<<"Enter the position : \n";
  cin>>iLocation;

  bRet = CheckBit(iValue, iLocation);

  if (bRet == true)
  {
    cout<<"Bit is ON at position "<<iLocation<< "\n";
  }
  else
  {
    cout<<"Bit is OFF at position "<<iLocation<<"\n";
  }

  return 0;
}