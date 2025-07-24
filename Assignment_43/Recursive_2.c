///////////////////////////////////////////////////////
//
//  File name :     Recursive_2
//  Description:    Write a recursive program which accept number from user and return largest digit.
//  Author :        Trupti Bhatlekar
//  Date :          23/07/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Input: 87653
// Output: 8
///////////////////////////////////////////////////////

int Max(int iNo)
{
  static int iMax = 0;
  int iDigit = 0;

  if (iNo != 0)
  {
    iDigit = iNo % 10;
    if (iDigit > iMax)
    {
      iMax = iDigit;
    }
    Max(iNo / 10);
  }

  return iMax;
}

int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter number: ");
  scanf("%d", &iValue);

  int iRet = Max(iValue);
  printf("Largest digit is : %d\n", iRet);

  return 0;
}
