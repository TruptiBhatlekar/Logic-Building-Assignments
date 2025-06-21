///////////////////////////////////////////////////////
//
//  File name :     CheckWhether_1
//  Description:    Write a program which checks whether 15th bit is ON or OFF.
//  Author :        Trupti Bhatlekar
//  Date :          21/06/2025
//
///////////////////////////////////////////////////////

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
  UINT iMask = 0x00004000; // 15th bit
  UINT iResult = 0;

  iResult = iNo & iMask;

  return (iResult == iMask);
}

int main()
{
  UINT iValue = 0;
  bool bRet = false;

  cout<<"Enter number : \n";
  cin>>iValue;

  bRet = CheckBit(iValue);

  if (bRet == true)
  {
    cout<<"15th bit is ON\n";
  }
  else
  {
    cout<<"15th bit is OFF\n";
  }

  return 0;
}
