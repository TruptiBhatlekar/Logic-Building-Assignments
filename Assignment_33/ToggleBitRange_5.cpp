///////////////////////////////////////////////////////
//
//  File name :     ToggleBitRange_5
//  Description:    Accept one Number from user and range of positions from user. Toggle all bits from that range.
//  Author :        Trupti Bhatlekar
//  Date :          21/06/2025
//
///////////////////////////////////////////////////////

#include <iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
{
  UINT iMask = 0;
  UINT iResult = 0;

  for (int i = iStart; i <= iEnd; i++)
  {
    iMask |= (1 << (i - 1));
  }

  iResult = iNo ^ iMask;

  return iResult;
}

int main()
{
  UINT iValue = 0, iRet = 0;
  int iStart = 0, iEnd = 0;

  cout<<"Enter number : \n";
  cin>>iValue;

  cout<<"Enter start position : \n";
  cin>>iStart;

  cout<<"Enter end position : \n";
  cin>>iEnd;

  iRet = ToggleBitRange(iValue, iStart, iEnd);

  cout<<"Updated number is : "<<iRet<< "\n";

  return 0;
}