///////////////////////////////////////////////////////
//
//  File name :     SinglyLLL_3
//  Description:    Display product of digits of each element from linked list (excluding 0).
//  Author :        Trupti Bhatlekar
//  Date :          29/06/2025
//
///////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//Input: | 11 | -> | 20 | -> | 32 | -> | 41 |
//Output: 1 2 6 4
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

void DisplayProduct(PNODE head)
{
    int prod = 0;
    int digit = 0;
    int no = 0;

  while (head != NULL)
{
    no = head->Data;
    prod = 1;

    if (no == 0)
    {
        prod = 0;
    }
    else
    {
    while (no > 0)
    {
        digit = no % 10;
        if (digit != 0)
        {
            prod *= digit;
        }
            no /= 10;
    }
    }
    printf("%d ", prod);
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
    
    InsertFirst(&First, 41);
    InsertFirst(&First, 32);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);

    Display(First);

    DisplayProduct(First);
    
    return 0;
}