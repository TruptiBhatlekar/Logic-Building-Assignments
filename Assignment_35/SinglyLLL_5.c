///////////////////////////////////////////////////////
//
//  File name :     SinglyLLL_5
//  Description:    Display addition of digits of each element from singly linear linked list.
//  Author :        Trupti Bhatlekar
//  Date :          29/06/2025
//
///////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//Input: | 110 | -> | 230 | -> | 20 | -> | 240 | -> | 640 | 
//Output: 2 5 2 6 10
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

int SumDigit(int no)
{
    int iSum = 0;
    while (no != 0)
    {
        iSum += no % 10;
        no /= 10;
    }
    return iSum;
}

void DisplayDigitSums(PNODE head)
{
    while (head != NULL)
    {
        printf(" %d " , SumDigit(head->Data));
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
    
    InsertFirst(&First, 640);   
    InsertFirst(&First, 240);
    InsertFirst(&First, 20);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    Display(First);

    printf("Addition of digits of each element: ");
    DisplayDigitSums(First);
    
    return 0;
}