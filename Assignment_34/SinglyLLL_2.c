///////////////////////////////////////////////////////
//
//  File name :     SinglyLLL_2
//  Description:    Search last occurrence of a particular element in singly linear linked list.
//  Author :        Trupti Bhatlekar
//  Date :          29/06/2025
//
///////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//Input: | 10 | -> | 20 | -> | 30 | -> | 40 | -> | 50 | -> | 30 | -> | 70 | -> NULL
//Input element: 30, Output: 6
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

int SearchlastOcc(PNODE head, int no)
{
    int iPos = 1; int iLastpos = -1;

    while (head != NULL)
    {
        if (head->Data == no)
        {
            iLastpos = iPos;
        }
        head = head->Next;
        iPos++;
    }
    return iLastpos; 
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
    int iNo = 30;

    InsertFirst(&First, 70);
    InsertFirst(&First, 30);
    InsertFirst(&First, 50);
    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    printf("Linked List: \n");
    
    Display(First);

    iRet = SearchlastOcc(First, iNo);
    if (iRet != -1)
    {
        printf("Last occurrence of element %d is at position: %d\n", iNo, iRet);
    }
    else
    {
        printf("Element %d not found in the linked list.\n", iNo);
    }

    return 0;
}