///////////////////////////////////////////////////////
//
//  File name :     CheckBit_4
//  Description:    Accept one Number,two positions from user and check whether bit at first or bit at second position is ON or OFF.
//  Author :        Trupti Bhatlekar
//  Date :          21/06/2025
//
///////////////////////////////////////////////////////

#include <iostream>
using namespace std;

typedef unsigned int UINT;
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT iNo, UINT iPos1, UINT iPos2)
{
  UINT iMask1 = 1, iMask2 = 1;
  UINT iResult1 = 0, iResult2 = 0;

  if (iPos1 < 1 || iPos1 > 32 || iPos2 < 1 || iPos2 > 32)
  {
    cout<<"Invalid bit positions\n";
    return FALSE;
  }

  iMask1 = iMask1 << (iPos1 - 1);
  iMask2 = iMask2 << (iPos2 - 1);

  iResult1 = iNo & iMask1;
  iResult2 = iNo & iMask2;

  if (iResult1 == iMask1 || iResult2 == iMask2)
  {
    return TRUE;
  }
  else
  {
    return FALSE;
  }
}

int main()
{
  UINT iValue = 0, iPos1 = 0, iPos2 = 0;
  BOOL bRet = FALSE;

  cout<<"Enter number : \n";
  cin>>iValue;

  cout<<"Enter first position : \n";
  cin>>iPos1;

  cout<<"Enter second position : \n";
  cin>>iPos2;

  bRet = CheckBit(iValue, iPos1, iPos2);

  if (bRet == TRUE)
  {
    cout<<"Bit is ON at either " <<iPos1 << " or " <<iPos2 << " position\n";
  }
  else
  {
    cout<<"Bits are OFF at both positions\n";
  }

  return 0;
}