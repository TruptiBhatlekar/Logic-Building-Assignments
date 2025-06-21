///////////////////////////////////////////////////////
//
//  File name :     CountOne_1
//  Description:    Accept one Number from user and Count number of ON (1) bits in it without using % or / operator.
//  Author :        Trupti Bhatlekar
//  Date :          21/06/2025
//
///////////////////////////////////////////////////////

#include <iostream>
using namespace std;

typedef unsigned int UINT;

int CountOne(UINT iNo)
{
  int iCount = 0;

  while (iNo != 0)
  {
    if ((iNo & 1) == 1)
    {
      iCount++;
    }
    iNo = iNo >> 1;
  }

  return iCount;
}

int main()
{
  UINT iValue = 0;
  int iRet = 0;

  cout<<"Enter number : \n";
  cin>>iValue;

  iRet = CountOne(iValue);

  cout<<"Number of ON bits are : "<<iRet<< "\n";

  return 0;
}