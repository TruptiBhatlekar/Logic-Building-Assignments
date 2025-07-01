///////////////////////////////////////////////////////
//
//  File name :     Array
//  Description:    Write a class program with inheritance to perform:
//                  1. SearchLast()
//                  2. EvenCount()
//                  3. OddCount()
//                  4. SumAll()
//  Author :        Trupti Bhatlekar
//  Date :          30/06/2025
//
////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

class Array
{
protected:
  int *Arr;
  int size;

public:
  Array(int value = 10)
  {
    cout << "Inside Constructor\n";
    size = value;
    Arr = new int[size];
  }

  Array(Array &ref)
  {
    cout << "Inside copy constructor\n";
    size = ref.size;
    Arr = new int[size];
    for (int i = 0; i < size; i++)
    {
      Arr[i] = ref.Arr[i];
    }
  }

  ~Array()
  {
    cout << "Inside Destructor\n";
    delete[] Arr;
  }

  void Accept()
  {
    cout << "Please enter the values:\n";
    for (int i = 0; i < size; i++)
    {
      cin >> Arr[i];
    }
  }

  void Display()
  {
    cout << "Elements are:\n";
    for (int i = 0; i < size; i++)
    {
      cout << Arr[i] << "\t";
    }
    cout << "\n";
  }
};

class ArrSearch : public Array
{
public:
  ArrSearch(int no = 10) : Array(no) {}

  int Frequency(int value)
  {
    int cnt = 0;
    for (int i = 0; i < size; i++)
    {
      if (Arr[i] == value)
      {
        cnt++;
      }
    }
    return cnt;
  }

  int SearchFirst(int value)
  {
    for (int i = 0; i < size; i++)
    {
      if (Arr[i] == value)
      {
        return i + 1;
      }
    }
    return -1;
  }

  int SearchLast(int value)
  {
    for (int i = size - 1; i >= 0; i--)
    {
      if (Arr[i] == value)
      {
        return i + 1;
      }
    }
    return -1;
  }

  int EvenCount()
  {
    int cnt = 0;
    for (int i = 0; i < size; i++)
    {
      if (Arr[i] % 2 == 0)
      {
        cnt++;
      }
    }
    return cnt;
  }

  int OddCount()
  {
    int cnt = 0;
    for (int i = 0; i < size; i++)
    {
      if (Arr[i] % 2 != 0)
      {
        cnt++;
      }
    }
    return cnt;
  }

  int SumAll()
  {
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
      sum += Arr[i];
    }
    return sum;
  }
};

int main()
{
  cout << "Inside main\n";

  ArrSearch sobj1(5);
  sobj1.Accept();
  sobj1.Display();

  int iret = sobj1.Frequency(11);
  cout << "Frequency is = " << iret << "\n";

  iret = sobj1.SearchFirst(11);
  cout << "First occurrence is = " << iret << "\n";

  iret = sobj1.SearchLast(11);
  cout << "Last occurrence is = " << iret << "\n";

  iret = sobj1.EvenCount();
  cout << "Even count = " << iret << "\n";

  iret = sobj1.OddCount();
  cout << "Odd count = " << iret << "\n";

  iret = sobj1.SumAll();
  cout << "Sum of all elements = " << iret << "\n";

  return 0;
}