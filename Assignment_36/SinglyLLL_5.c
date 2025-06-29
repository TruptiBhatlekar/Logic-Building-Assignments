///////////////////////////////////////////////////////
//
//  File name :     SinglyLLL_5
//  Description:    Display largest digit of each element from linked list.
//  Author :        Trupti Bhatlekar
//  Date :          29/06/2025
//
///////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//Input: | 11 | -> | 250 | -> | 532 | -> | 419 |  
//Output: 1 5 5 9
//////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE head, int no)  
{

    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->Data = no;
    newn->Next = *head;
    *head = newn;
}

void DisplayLarge(PNODE head)
{
  int no = 0;
  int digit = 0;
  int max = 0;

  while (head != NULL)
  {
    no = head->Data;
    max = 0;

    while (no > 0)
    {
      digit = no % 10;
      if (digit > max)
      {
        max = digit;
      }
      no /= 10;
    }
    printf("%d ", max);
    head = head->Next;
  }
  printf("\n");
}

void Display(PNODE head)
{
    while (head != NULL)
    {
        printf("| %d | -> ", head->Data);
        head = head->Next;
    }
    printf("NULL\n");
}

int main()
{
    PNODE First = NULL;
    
    InsertFirst(&First, 419);   
    InsertFirst(&First, 532);
    InsertFirst(&First, 250);
    InsertFirst(&First, 11);

    Display(First);

    DisplayLarge(First);
    
    return 0;
}