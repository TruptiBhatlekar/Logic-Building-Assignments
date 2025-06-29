///////////////////////////////////////////////////////
//
//  File name :     SinglyLLL_5
//  Description:    Return smallest element from singly linear linked list.
//  Author :        Trupti Bhatlekar
//  Date :          29/06/2025
//
///////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//Input: | 110 | -> | 230 | -> | 20 | -> | 240 | -> | 640 | 
//Output: 20
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

int Minimum(PNODE head)
{
  if (head == NULL)
  {
    return -1;
  }

  int iMin = head->Data;

  while (head != NULL)
  {
    if (head->Data < iMin)
    {
      iMin = head->Data;
    }
    head = head->Next;
  }

  return iMin;
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
    int iRet = 0;

    InsertFirst(&First, 640);   
    InsertFirst(&First, 240);
    InsertFirst(&First, 20);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    printf("Linked List: \n");
    
    Display(First);

    iRet = Minimum(First);
    printf("Minimum element is: %d\n", iRet);

    return 0;
}