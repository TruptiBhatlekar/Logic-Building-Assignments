///////////////////////////////////////////////////////
//
//  File name :     SinglyLLL_1
//  Description:    Reverse each element of singly linear linked list.
//  Author :        Trupti Bhatlekar
//  Date :          29/06/2025
//
///////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//Input: | 11 | -> | 28 | -> | 17 | -> | 41 | -> | 6 | -> | 89 |
//Output: | 11 | -> | 82 | -> | 71 | -> | 14 | -> | 6 | -> | 98 |
//////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

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

  newn->Next = NULL;
  newn->Data = no;
  newn->Next = *head;

  *head = newn;
}
int ReverseDigit(int num)
{
  int rev = 0;
  while (num != 0)
  {
    rev = rev * 10 + (num % 10);
    num /= 10;
  }
  return rev;
}

void Reverse(PNODE Head)
{
  while (Head != NULL)
  {
    printf("%d ", ReverseDigit(Head->Data));
    Head = Head->Next;
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
    
    InsertFirst(&First, 89);
    InsertFirst(&First, 6);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);

    Display(First);

    printf("Reverse Elements in the Linked List are: \n");
    Reverse(First);

    return 0;
}