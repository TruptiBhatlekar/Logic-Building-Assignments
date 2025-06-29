///////////////////////////////////////////////////////
//
//  File name :     SinglyLLL_1
//  Description:    Display all perfect elements from singly linear linked list.
//  Author :        Trupti Bhatlekar
//  Date :          29/06/2025
//
///////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//Input: | 11 | -> | 28 | -> | 17 | -> | 41 | -> | 6 | -> | 89 |
//Output: 6 28
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
int Perfect(int no)
{
  int iSum = 0;
  for (int i = 1; i <= no / 2; i++)
  {
    if (no % i == 0)
    {
      iSum += i;
    }
  }
  return (iSum == no);
}

void DisplayPerfect(PNODE head)
{
  while (head != NULL)
  {
    if (Perfect(head->Data))
    {
      printf("%d ", head->Data);
    }
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
    
    InsertFirst(&First, 89);
    InsertFirst(&First, 6);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);

    Display(First);

    printf("Perfect Elements in the Linked List are: \n");
    DisplayPerfect(First);

    return 0;
}