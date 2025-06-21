///////////////////////////////////////////////////////
//
//  File name :     CommonBits_2
//  Description:    Accept two Numbers from user and display position of common ON bits from that two numbers.
//  Author :        Trupti Bhatlekar
//  Date :          21/06/2025
//
///////////////////////////////////////////////////////

#include <iostream>
using namespace std;

typedef unsigned int UINT;

void CommonBits(UINT iNo1, UINT iNo2)
{
  UINT iMask = 1;

  cout<<"Common ON bit positions are : \n";

  for (int i = 1; i <= 32; i++)
  {
    if (((iNo1 & iMask) != 0) && ((iNo2 & iMask) != 0))
    {
      cout<<i<< " ";
    }
    iMask = iMask << 1;
  }

  cout<<"\n";
}

int main()
{
  UINT iValue1 = 0, iValue2 = 0;

  cout<<"Enter first number : \n";
  cin>>iValue1;

  cout<<"Enter second number : \n";
  cin>>iValue2;

  CommonBits(iValue1, iValue2);

  return 0;
}