///////////////////////////////////////////////////////
//
//  File name :     CheckWhether_4
//  Description:    Write a program which Check whether 7th, 8th, and 9th bits are ON or OFF.
//  Author :        Trupti Bhatlekar
//  Date :          21/06/2025
//
///////////////////////////////////////////////////////

#include <iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
  UINT iMask = 0x000001C0; // 7th, 8th, 9th bits
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
    cout<<"7th, 8th and 9th bits are ON\n";
  }
  else
  {
    cout<<"One or more bits are OFF\n";
  }

  return 0;
}