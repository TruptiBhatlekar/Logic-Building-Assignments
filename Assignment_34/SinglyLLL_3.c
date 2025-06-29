///////////////////////////////////////////////////////
//
//  File name :     SinglyLLL_3
//  Description:    Return addition of all elements from singly linear linked list.
//  Author :        Trupti Bhatlekar
//  Date :          29/06/2025
//
///////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//Input: | 10 | -> | 20 | -> | 30 | -> | 40 |
//Output: 100
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

int Addition(PNODE head)
{
    int iSum = 0;

    while (head != NULL)
    {
        iSum += head->Data;
        head = head->Next;
    }
  return iSum;
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
        
    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    printf("Linked List: \n");
    
    Display(First);

    int iRet = Addition(First);
    printf("Addition of all elements is: %d\n", iRet);

    return 0;
}