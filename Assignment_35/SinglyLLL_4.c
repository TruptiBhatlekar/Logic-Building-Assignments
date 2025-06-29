///////////////////////////////////////////////////////
//
//  File name :     SinglyLLL_4
//  Description:    Return second maximum element from singly linear linked list.
//  Author :        Trupti Bhatlekar
//  Date :          29/06/2025
//
///////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//Input: | 110 | -> | 230 | ->| 320 | -> | 240 | 
//Output: 240
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

int SecMaximum(PNODE head)
{
    int iMax = 0, iSecMax = 0;

  while (head != NULL)
  {
    if (head->Data > iMax)
    {
      iSecMax = iMax;
      iMax = head->Data;
    }
    else if ((head->Data > iSecMax) && (head->Data != iMax))
    {
      iSecMax = head->Data;
    }
    head = head->Next;
  }
  return iSecMax;

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
        
    InsertFirst(&First, 240);
    InsertFirst(&First, 320);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    Display(First);

    iRet = SecMaximum(First);
    printf("Maximum element is: %d\n", iRet);

    return 0;
}