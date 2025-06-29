///////////////////////////////////////////////////////
//
//  File name :     SinglyLLL_3
//  Description:    Return addition of all even elements from singly linear linked list.
//  Author :        Trupti Bhatlekar
//  Date :          29/06/2025
//
///////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//Input: | 11 | -> | 20 | -> | 32 | -> | 41 |
//Output: 52
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
int Prime(int no)
{
    if (no < 2)
    {
        return 0;
    }
    for (int i = 2; i <= no / 2; i++)
    {
        if (no % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int AdditionEven(PNODE head)
{
    int iSum = 0;
    while (head != NULL)
    {
        if (head->Data % 2 == 0)
        {
            iSum += head->Data;
        }
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
    
    InsertFirst(&First, 41);
    InsertFirst(&First, 32);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);

    Display(First);

    int iRet = AdditionEven(First);
    printf("Addition of even elements are: %d\n", iRet);
    
    return 0;
}