///////////////////////////////////////////////////////
//
//  File name :     SinglyLLL_4
//  Description:    Display smallest digit of each element from linked list.
//  Author :        Trupti Bhatlekar
//  Date :          29/06/2025
//
///////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//Input: | 11 | -> | 250 | ->| 532 | -> | 415 | 
//Output: 1 0 2 1
//////////////////////////////////////////////////////////////

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

void DisplaySmall(PNODE head)
{
  int no = 0;
  int digit = 0;
  int min = 0;

  while (head != NULL)
  {
    no = head->Data;
    min = 9;

    while (no > 0)
    {
      digit = no % 10;
      if (digit < min)
      {
        min = digit;
      }
      no /= 10;
    }
    printf("%d ", min);
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
            
    InsertFirst(&First, 415);
    InsertFirst(&First, 532);
    InsertFirst(&First, 250);
    InsertFirst(&First, 11);

    Display(First);

    DisplaySmall(First);

    return 0;
}