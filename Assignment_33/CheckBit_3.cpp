///////////////////////////////////////////////////////
//
//  File name :     CheckBit_3
//  Description:    Accept one Number from user and check whether 9th or 12th bit is ON or OFF.
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

BOOL CheckBit(UINT iNo)
{
  UINT iMask1 = 1, iMask2 = 1;
  UINT iResult1 = 0, iResult2 = 0;

  iMask1 = iMask1 << (9 - 1);  // 9th bit
  iMask2 = iMask2 << (12 - 1); // 12th bit

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
  UINT iValue = 0;
  BOOL bRet = FALSE;

  cout<<"Enter number : \n";
  cin>>iValue;

  bRet = CheckBit(iValue);

  if (bRet == TRUE)
  {
    cout<<"9th or 12th bit is ON\n";
  }
  else
  {
    cout<<"9th or 12th bit is OFF\n";
  }

  return 0;
}